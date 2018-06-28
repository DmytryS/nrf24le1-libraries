#define CRC_OFF 0
#define CRC_8 1
#define CRC_16 2
#define DR_250K 0
#define DR_1M 1
#define DR_2M 2
#define PWR_MIN 0
#define PWR_LOW 1
#define PWR_HIGH 2
#define PWR_MAX 3

//Compile-time settings
//#define DEBUG //enable or disable debugging on serial port 38400 8n1
#define DEVICE_ID 1 //Device ID, uint8_t
#define INTERVAL 48 //sensor update interval, uint8_t
//#define MEASURE_PRESSURE //measure or not pressure
#define MEASURE_HUMIDITY //measure or not humidity
#define MEASURE_TEMPERATURE //measure or not temperature
#define WD_TIMEOUT 5 //watchdog timeout in seconds
#define RF_CHANNEL 70 //RF channel number 0-126
#define RF_AUTOACK //RF Enable or disable autoAck
#define RF_DYNPLD //enable dynamic payload size
#define RF_DATARATE DR_1M //RF data rate - DR_250K, DR_1M or DR_2M
#define RF_POWER PWR_MAX //RF radio power - PWR_MIN, PWR_LOW, PWR_HIGH, PWR_MAX
#define RF_RETRDELAY 10 //RF autoretries delay in 250mkSeconds
#define RF_RETRCOUNT 10 //RF autoRetries count
#define RF_CRC CRC_16 //RF CRC - CRC_8, CRC_16 or CRC_OFF
#define RF_ADDR0 0xAA //RF pipe address, byte 0
#define RF_ADDR1 0x0E //RF pipe address, byte 1
#define RF_ADDR2 0x0E //RF pipe address, byte 2
#define RF_ADDR3 0x0E //RF pipe address, byte 3
#define RF_ADDR4 0x0E //RF pipe address, byte 4

#include <stdint.h>
#include <stdio.h>
#include "delay.h"
#include "gpio.h"
#include "rf.h"
#include "watchdog.h"
#include "pwr_clk_mgmt.h"
#include "rtc2.h"
#ifdef DEBUG
#include "uart_int.h"
#include "uart.h"
#endif

#define LEDPIN GPIO_PIN_ID_P0_2
#define BME_CS GPIO_PIN_ID_P0_1
#define BME_SCK GPIO_PIN_ID_P1_5
#define BME_MOSI GPIO_PIN_ID_P1_6
#define BME_MISO GPIO_PIN_ID_P0_0
#define WD_SAFE watchdog_calc_timeout_from_sec(WD_TIMEOUT)
#define SL_COUNT INTERVAL/2
#define BME_REG_DIG_T1 0x88
#define BME_REG_DIG_T2 0x8A
#define BME_REG_DIG_T3 0x8C
#define BME_REG_DIG_P1 0x8E
#define BME_REG_DIG_P2 0x90
#define BME_REG_DIG_P3 0x92
#define BME_REG_DIG_P4 0x94
#define BME_REG_DIG_P5 0x96
#define BME_REG_DIG_P6 0x98
#define BME_REG_DIG_P7 0x9A
#define BME_REG_DIG_P8 0x9C
#define BME_REG_DIG_P9 0x9E
#define BME_REG_DIG_H1 0xA1
#define BME_REG_DIG_H2 0xE1
#define BME_REG_DIG_H3 0xE3
#define BME_REG_DIG_H4 0xE4
#define BME_REG_DIG_H5 0xE5
#define BME_REG_DIG_H6 0xE7
#define BME_REG_CHIPID 0xD0
#define BME_REG_VERSION 0xD1
#define BME_REG_SOFTRESET 0xE0
#define BME_REG_CONTROLHUMID 0xF2
#define BME_REG_STATUS 0XF3
#define BME_REG_CONTROL 0xF4
#define BME_REG_CONFIG 0xF5
#define BME_REG_PRESSUREDATA 0xF7
#define BME_REG_TEMPDATA 0xFA
#define BME_REG_HUMIDDATA 0xFD
#define BME_SPI_RW 0x80

__xdata __at(0x0100) uint8_t sleepCnt; //1 byte
__xdata __at(0x0101) bool sendResult; //1 byte
__xdata __at(0x0102) unsigned long pktCnt; //4 bytes
__xdata __at(0x0106) bool bmeStatus; //1 byte
__xdata __at(0x0107) uint8_t lastMeasure; //1 byte
__xdata __at(0x0108) uint8_t bmeData[8]; //8 bytes
__xdata __at(0x0110) struct bme_calib_t { //33 bytes
  uint16_t dig_T1;
  int16_t  dig_T2;
  int16_t  dig_T3;
  uint16_t dig_P1;
  int16_t  dig_P2;
  int16_t  dig_P3;
  int16_t  dig_P4;
  int16_t  dig_P5;
  int16_t  dig_P6;
  int16_t  dig_P7;
  int16_t  dig_P8;
  int16_t  dig_P9;
  uint8_t  dig_H1;
  int16_t  dig_H2;
  uint8_t  dig_H3;
  int16_t  dig_H4;
  int16_t  dig_H5;
  int8_t   dig_H6;
} bmeCalibData;

struct rfPacket_t {
  uint32_t flags; //sensor flags (bit mapped: 0-temperature, 1-humidity, 2-pressure, 3-co2, 4-dangerous gas, 5-lumination, 6-wind speed, 7-wind direction. 8-precipitations yes/no, 9-precipitation level, 10-radiation, 31-power ok flag, 11-14 not used now)
  uint32_t packetCount;//Sensor's sent packet counter
  int8_t errorCode; //Sensor's error code (0=all ok)
  uint8_t deviceId; //sensor ID
  uint16_t crc;
  int16_t temp; //temperature value in deg C*100
  uint16_t hum;//humidity in percents*100
  uint16_t pres; //pressure in hPa
} rfPacket; // 18 bytes total

uint16_t checkCRC(uint8_t* pcBlock, uint16_t len) {
  uint16_t crc = 0xFFFF;
  uint8_t i;
  while (len--) {
    crc ^= *pcBlock++ << 8;
    for (i = 0; i < 8; i++) crc = crc & 0x8000 ? (crc << 1) ^ 0x1021 : crc << 1;
  }
  return crc;
}

uint8_t bmeSpixfer(uint8_t x) {
  uint8_t reply = 0;
  int i;
  for (i=7; i>=0; i--) {
    reply <<= 1;
    gpio_pin_val_clear(BME_SCK);
    if (x&(1<<i)) gpio_pin_val_set(BME_MOSI); else gpio_pin_val_clear(BME_MOSI);
    gpio_pin_val_set(BME_SCK);
    if (gpio_pin_val_read(BME_MISO)) reply |= 1;
  }
  return reply;
}

uint8_t bmeReadBytes(uint8_t addr, uint8_t* data, uint8_t len) {
  uint8_t i,l=0;
  gpio_pin_val_clear(BME_CS);
  bmeSpixfer(addr|BME_SPI_RW);
  for (i=0;i<len;i++){
   *(data+i)=bmeSpixfer(0);
   l++;
  }
  gpio_pin_val_set(BME_CS);
  return l;
}

void bmeWrite(uint8_t addr,uint8_t val) {
  gpio_pin_val_clear(BME_CS);
  bmeSpixfer(addr&(~BME_SPI_RW));
  bmeSpixfer(val);
  gpio_pin_val_set(BME_CS);
}

uint8_t bmeRead8(uint8_t addr) {
  uint8_t r;
  gpio_pin_val_clear(BME_CS);
  bmeSpixfer(addr|BME_SPI_RW);
  r=bmeSpixfer(0);
  gpio_pin_val_set(BME_CS);
  return r;
}

uint16_t bmeRead16(uint8_t addr){
  uint16_t value;
  gpio_pin_val_clear(BME_CS);
  bmeSpixfer(addr|BME_SPI_RW);
  value=(bmeSpixfer(0)<<8)|bmeSpixfer(0);
  gpio_pin_val_set(BME_CS);
  return value;
}

uint16_t bmeRead16LE(uint8_t addr){
  uint16_t temp = bmeRead16(addr);
  return (temp>>8)|(temp<<8);
}

uint8_t bmeInit() {
  uint8_t tmpVal=0;
  if (bmeRead8(BME_REG_CHIPID)!=0x60) return false;
  bmeWrite(BME_REG_SOFTRESET,0xB6);
  rtc2_configure(RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ ,8192); //65535=2 сек, 32767=1 сек
  rtc2_run();
  pwr_clk_mgmt_enter_pwr_mode_register_ret();
  rtc2_stop();
  rtc2_configure(RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ ,256); //65535=2 сек, 32767=1 сек
  while (bmeRead8(BME_REG_STATUS)&1) {
    rtc2_run();
    pwr_clk_mgmt_enter_pwr_mode_register_ret();
    rtc2_stop();
  }
  bmeCalibData.dig_T1=bmeRead16LE(BME_REG_DIG_T1);
  bmeCalibData.dig_T2=(int16_t)bmeRead16LE(BME_REG_DIG_T2);
  bmeCalibData.dig_T3=(int16_t)bmeRead16LE(BME_REG_DIG_T3);
  bmeCalibData.dig_P1=bmeRead16LE(BME_REG_DIG_P1);
  bmeCalibData.dig_P2=(int16_t)bmeRead16LE(BME_REG_DIG_P2);
  bmeCalibData.dig_P3=(int16_t)bmeRead16LE(BME_REG_DIG_P3);
  bmeCalibData.dig_P4=(int16_t)bmeRead16LE(BME_REG_DIG_P4);
  bmeCalibData.dig_P5=(int16_t)bmeRead16LE(BME_REG_DIG_P5);
  bmeCalibData.dig_P6=(int16_t)bmeRead16LE(BME_REG_DIG_P6);
  bmeCalibData.dig_P7=(int16_t)bmeRead16LE(BME_REG_DIG_P7);
  bmeCalibData.dig_P8=(int16_t)bmeRead16LE(BME_REG_DIG_P8);
  bmeCalibData.dig_P9=(int16_t)bmeRead16LE(BME_REG_DIG_P9);
  bmeCalibData.dig_H1=bmeRead8(BME_REG_DIG_H1);
  bmeCalibData.dig_H2=(int16_t)bmeRead16LE(BME_REG_DIG_H2);
  bmeCalibData.dig_H3=bmeRead8(BME_REG_DIG_H3);
  bmeCalibData.dig_H4=(bmeRead8(BME_REG_DIG_H4)<<4)|(bmeRead8(BME_REG_DIG_H4+1)&0xF);
  bmeCalibData.dig_H5=(bmeRead8(BME_REG_DIG_H5+1)<<4)|(bmeRead8(BME_REG_DIG_H5)>>4);
  bmeCalibData.dig_H6=(int8_t)bmeRead8(BME_REG_DIG_H6);
  #ifdef MEASURE_HUMIDITY
  bmeWrite(BME_REG_CONTROLHUMID,0b00000001); //humidity oversampling x1
  #else
  bmeWrite(BME_REG_CONTROLHUMID,0b00000000); //humidity oversampling x0 - disabled
  #endif
  bmeWrite(BME_REG_CONFIG,0b10100000);//standby timeout 1000ms, filter off, 3wire SPI off
  #ifdef MEASURE_PRESSURE
  #ifdef MEASURE_TEMPERATURE
  bmeWrite(BME_REG_CONTROL,0b00100101);//temp oversampling x1, pressure oversampling x1, forced mode
  #else
  bmeWrite(BME_REG_CONTROL,0b00000101);//temp oversampling x0, pressure oversampling x1, forced mode
  #endif
  #else
  #ifdef MEASURE_TEMPERATURE
  bmeWrite(BME_REG_CONTROL,0b00100001);//temp oversampling x1, pressure oversampling x0, forced mode
  #else
  bmeWrite(BME_REG_CONTROL,0b00000001);//temp oversampling x0, pressure oversampling x0, forced mode
  #endif
  #endif
  return true;
}

uint8_t bmeMeasure() {
  uint8_t retVal=0;
  int32_t var1=0,var2=0,tmp=0,t=0;
  uint32_t p=0;
  #if INTERVAL>=10
  if (lastMeasure>=INTERVAL) {
  #else
  if (lastMeasure>=10) {
  #endif
   #ifdef MEASURE_HUMIDITY
   bmeWrite(BME_REG_CONTROLHUMID,0b00000001); //humidity oversampling x1
   #else
   bmeWrite(BME_REG_CONTROLHUMID,0b00000000); //humidity oversampling x0 - disabled
   #endif
   bmeWrite(BME_REG_CONFIG,0b10100000);//standby timeout 1000ms, filter off, 3wire SPI off
   #ifdef MEASURE_PRESSURE
   #ifdef MEASURE_TEMPERATURE
   bmeWrite(BME_REG_CONTROL,0b00100101);//temp oversampling x1, pressure oversampling x1, forced mode
   #else
   bmeWrite(BME_REG_CONTROL,0b00000101);//temp oversampling x0, pressure oversampling x1, forced mode
   #endif
   #else
   #ifdef MEASURE_TEMPERATURE
   bmeWrite(BME_REG_CONTROL,0b00100001);//temp oversampling x1, pressure oversampling x0, forced mode
   #else
   bmeWrite(BME_REG_CONTROL,0b00000001);//temp oversampling x0, pressure oversampling x0, forced mode
   #endif
   #endif
   rtc2_configure(RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ ,128); //65535=2 сек, 32767=1 сек
   while(bmeRead8(BME_REG_STATUS)&8) {
     rtc2_run();
     pwr_clk_mgmt_enter_pwr_mode_register_ret();
     rtc2_stop();
   }
   bmeReadBytes(BME_REG_PRESSUREDATA,bmeData,8);
  }
  tmp=((int32_t)bmeData[3]<<16)|((int32_t)bmeData[4]<<8)|bmeData[5];
  if (tmp==0x800000) rfPacket.flags&=(~(uint32_t)1); else {
    tmp>>=4;
    var1=((((tmp>>3)-((int32_t)bmeCalibData.dig_T1<<1)))*((int32_t)bmeCalibData.dig_T2))>>11;
    var2=(((((tmp>>4)-((int32_t)bmeCalibData.dig_T1))*((tmp>>4)-((int32_t)bmeCalibData.dig_T1)))>>12)*((int32_t)bmeCalibData.dig_T3))>>14;
    t=var1+var2;
    rfPacket.temp=(int16_t)((t*5+128)>>8);
    rfPacket.flags|=1;
  }
  tmp=((int32_t)bmeData[6]<<8)|bmeData[7];
  if (tmp==0x8000) rfPacket.flags&=(~(uint32_t)2); else {
    var1=(t-((int32_t)76800));
    var1=(((((tmp<<14)-(((int32_t)bmeCalibData.dig_H4)<<20)-(((int32_t)bmeCalibData.dig_H5)*var1))+((int32_t)16384))>>15)*
      (((((((var1*((int32_t)bmeCalibData.dig_H6))>>10)*(((var1*((int32_t)bmeCalibData.dig_H3))>>11)+((int32_t)32768)))>>10)+
      ((int32_t)2097152))*((int32_t)bmeCalibData.dig_H2)+8192)>>14));
    var1=(var1-(((((var1>>15)*(var1>>15))>>7)*((int32_t)bmeCalibData.dig_H1))>>4));
    var1=(var1<0)?0:var1;
    var1=(var1>419430400)?419430400:var1;
    rfPacket.hum=(uint16_t)((var1>>12)*100/1024);
    rfPacket.flags|=2;
  }
  tmp=((int32_t)bmeData[0]<<16)|((int32_t)bmeData[1]<<8)|bmeData[2];
  if (tmp==0x800000) rfPacket.flags&=(~(uint32_t)4); else {
    tmp>>=4;
    var1=(((int32_t)t)>>1)-(int32_t)64000;
    var2=(((var1>>2)*(var1>>2))>>11)*((int32_t)bmeCalibData.dig_P6);
    var2=var2+((var1*((int32_t)bmeCalibData.dig_P5))<<1);
    var2=(var2>>2)+(((int32_t)bmeCalibData.dig_P4)<<16);
    var1=(((bmeCalibData.dig_P3*(((var1>>2)*(var1>>2))>>13))>>3)+((((int32_t)bmeCalibData.dig_P2)*var1)>>1))>>18;
    var1=((32768+var1)*((int32_t)bmeCalibData.dig_P1))>>15;
    if (var1==0) {
      retVal=4;
      rfPacket.flags|=4;
      rfPacket.pres=0;
    } else {
      p=((uint32_t)(((int32_t)1048576)-tmp)-(var2>>12))*3125;
      if (p<0x80000000) p=(p<<1)/((uint32_t)var1); else p=(p/(uint32_t)var1)*2;
      var1=(((int32_t)bmeCalibData.dig_P9)*((int32_t)(((p>>3)*(p>>3))>>13)))>>12;
      var2=(((int32_t)(p>>2))*((int32_t)bmeCalibData.dig_P8))>>13;
      p=(uint32_t)((int32_t)p+((var1+var2+bmeCalibData.dig_P7)>>4));
      rfPacket.pres=(uint16_t)(p/10);
      rfPacket.flags|=4;
    }
  }
  lastMeasure=0;
  return retVal;
}

#ifdef DEBUG
void printreg(char* pref,uint8_t num) {
  int i;
  printf_fast("%s 0x%02x=",pref,num);
  for(i=sizeof(num)*8-1; i>=0; --i) printf_fast("%d", (num >> i)&1);
  printf_fast("\n");
  return;
}
#endif

void main() {
  uint8_t tmp,pipeAddr[5];
#ifdef DEBUG
  uint8_t tmpVal=0;
#endif

  pwr_clk_mgmt_open_retention_latches();
  watchdog_setup();
  watchdog_set_wdsv_count(WD_SAFE);
  rtc2_configure(RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ ,65535); //65535=2 сек, 32767=1 сек
  pwr_clk_mgmt_wakeup_sources_configure(PWR_CLK_MGMT_WAKEUP_CONFIG_OPTION_WAKEUP_ON_RTC2_TICK_ALWAYS);
  pwr_clk_mgmt_pwr_failure_configure(PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_ENABLE|PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_THRESHOLD_2_1V);
  interrupt_control_global_enable();
#ifdef DEBUG
  uart_int_init();
  uart_rx_disable();
#endif
  if ((PWRDWN&0x7)==0x3) {
#ifdef DEBUG
    printf_fast("\n**** Waked up, cycle #%d\n",sleepCnt);
    delay_ms(7);
    printreg("PWRDWN:",PWRDWN);
    printreg("RSTREAS:",RSTREAS);
    printf_fast("sendResult: %u\n",sendResult);
    delay_ms(10);
#endif
    PWRDWN=0x0;
    lastMeasure+=2;
    if ((sleepCnt<SL_COUNT)&&sendResult) {
      sleepCnt++;
#ifdef DEBUG
      printf_fast("Will sleep again\n");
      delay_ms(5);
#endif
      RSTREAS=0x0;
      rtc2_run();
      watchdog_set_wdsv_count(WD_SAFE);
      pwr_clk_mgmt_close_retention_latches();
      pwr_clk_mgmt_enter_pwr_mode_memory_ret_tmr_on();
    }
    rfPacket.packetCount=++pktCnt;
  } else {
#ifdef DEBUG
    printf_fast("\n**** Started up\n");
    printreg("PWRDWN:",PWRDWN);
    printreg("RSTREAS:",RSTREAS);
    delay_ms(14);
#endif
    pktCnt=0;
    lastMeasure=255;
    rfPacket.packetCount=0;
    bmeStatus=bmeInit();
  }
#ifdef DEBUG
  gpio_pin_configure(LEDPIN,
        GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT |
        GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_CLEAR |
        GPIO_PIN_CONFIG_OPTION_PIN_MODE_OUTPUT_BUFFER_NORMAL_DRIVE_STRENGTH);
  gpio_pin_val_set(LEDPIN);
#endif
  rfPacket.deviceId=DEVICE_ID;
  rfPacket.flags=0;
  rfPacket.temp=0;
  rfPacket.hum=0;
  rfPacket.pres=0;
  rfPacket.crc=0;
  if (pwr_clk_mgmt_was_prev_reset_watchdog(pwr_clk_mgmt_get_reset_reason())) rfPacket.errorCode=127; else rfPacket.errorCode=0;
  RSTREAS=0x0;
  rf_spi_configure_enable();
  tmp=16*RF_RETRDELAY+RF_RETRCOUNT;
  rf_write_register(RF_SETUP_RETR,&tmp,1);
  rf_set_rf_channel(RF_CHANNEL);
  rf_read_register(RF_RF_SETUP,&tmp,1);
  tmp&=~RF_RF_SETUP_RF_DR;
  #if RF_DATARATE==DR_250K
    tmp|=RF_RF_SETUP_RF_DR_250_KBPS;
  #elif RF_DATARATE==DR_1M
    tmp|=RF_RF_SETUP_RF_DR_1_MBPS;
  #else
    tmp|=RF_RF_SETUP_RF_DR_2_MBPS;
  #endif
  tmp&=~RF_RF_SETUP_RF_PWR;
  #if RF_POWER==PWR_MAX
    tmp|=RF_RF_SETUP_RF_PWR_0_DBM;
  #elif RF_POWER==PWR_HIGH
    tmp|=RF_RF_SETUP_RF_PWR_NEG_6_DBM;
  #elif RF_POWER==PWR_LOW
    tmp|=RF_RF_SETUP_RF_PWR_NEG_12_DBM;
  #endif
  rf_write_register(RF_RF_SETUP,&tmp,1);
  #ifdef RF_AUTOACK
    tmp=63;
  #else
    tmp=0;
  #endif
  rf_write_register(RF_EN_AA,&tmp,1);
  rf_read_register(RF_CONFIG,&tmp,1);
  tmp&=~(RF_CONFIG_CRCO|RF_CONFIG_EN_CRC);
  #if RF_CRC==CRC_8
    tmp|=RF_CONFIG_EN_CRC;
  #elif RF_CRC==CRC_16
    tmp|=(RF_CONFIG_EN_CRC|RF_CONFIG_CRCO);
  #endif
  rf_write_register(RF_CONFIG,&tmp,1);
  pipeAddr[0]=RF_ADDR0;
  pipeAddr[1]=RF_ADDR1;
  pipeAddr[2]=RF_ADDR2;
  pipeAddr[3]=RF_ADDR3;
  pipeAddr[4]=RF_ADDR4;
  tmp=32;
  rf_write_register(RF_RX_ADDR_P0,pipeAddr,5);
  rf_write_register(RF_TX_ADDR,pipeAddr,5);
  rf_write_register(RF_RX_PW_P0,&tmp,1);
  #ifdef RF_DYNPLD
   tmp=63;
   rf_write_register(RF_EN_AA,&tmp,1);
   tmp=RF_FEATURE_EN_DPL;
   rf_write_register(RF_FEATURE,&tmp,1);
   tmp=RF_DYNPD_DPL_ALL;
   rf_write_register(RF_DYNPD,&tmp,1);
  #endif
  rf_power_up(false);
  delay_us(150);
  rf_set_as_tx();
  if (pwr_clk_mgmt_is_vdd_below_bor_threshold()) rfPacket.flags|=(uint32_t)0x80000000; else rfPacket.flags&=(uint32_t)0x7FFFFFFF;
  gpio_pin_configure(BME_CS,GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT|GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_SET);
  gpio_pin_configure(BME_SCK,GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT|GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_SET);
  gpio_pin_configure(BME_MOSI,GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT|GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_SET);
  gpio_pin_configure(BME_MISO,GPIO_PIN_CONFIG_OPTION_DIR_INPUT);
  if (!bmeStatus) bmeStatus=bmeInit();
  if (bmeStatus) rfPacket.errorCode+=bmeMeasure(); else rfPacket.errorCode+=1;
#ifdef DEBUG
  printf_fast("\nVARS pktCnt=%u,pwrLow=%u\n",pktCnt,pwr_clk_mgmt_is_vdd_below_bor_threshold());
  printf_fast("PKT Id=%u,cnt=%u,err=%d,temp=%d,hum=%u,pres=%u,flags=%u\n",rfPacket.deviceId,rfPacket.packetCount,rfPacket.errorCode,rfPacket.temp,rfPacket.hum,rfPacket.pres,rfPacket.flags);
  delay_ms(20);
#endif
  rfPacket.crc=checkCRC((uint8_t*)&rfPacket,sizeof(rfPacket));
  rf_flush_tx();
  rf_write_tx_payload((const uint8_t*) &rfPacket, sizeof(rfPacket), true);
  rf_read_register(RF_EN_AA,&tmp,1);
  while((!((tmp&0xF)&&rf_irq_max_rt_active()))&&(!(rf_irq_pin_active()&&rf_irq_tx_ds_active())));
  if (tmp) sendResult=!rf_irq_max_rt_active();
  else sendResult=rf_irq_tx_ds_active();
  rf_irq_clear_all();
  rf_power_down();
  sleepCnt=0;
#ifdef DEBUG
  gpio_pin_val_clear(LEDPIN);
#endif
  rtc2_configure(RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ ,65535); //65535=2 сек, 32767=1 сек
  rtc2_run();
  watchdog_set_wdsv_count(WD_SAFE);
  pwr_clk_mgmt_close_retention_latches();
  pwr_clk_mgmt_enter_pwr_mode_memory_ret_tmr_on();
}
