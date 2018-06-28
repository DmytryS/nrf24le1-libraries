#include "../libs.h"
#include "../nRFLE.c"
#include "../libraries/dht/dht.c"

#define chclient 			3 						// client number
#define SPEED 				1 						// 1 - 250kb, 2 - 1mb, 3 - 2mb.
#define PAlevel 			3 						// transmit power 0..3
#define CHANNEL 			75						// 1-123
#define Crclength 	    	2 						// 0 - crc off ,1 - 8bit ,2 - 16bit
#define AutoAck 		    false 	    			// disable hardware confirmation
#define SEND_INTERVAL 		300         			// send interval in seconds

#define DHTPIN 	            GPIO_PIN_ID_P1_3
#define DHT_POWER_PIN 	    GPIO_PIN_ID_P0_6

//#define POF PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_THRESHOLD_2_1V
//#define POF PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_THRESHOLD_2_3V
//#define POF PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_THRESHOLD_2_5V
#define POF PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_THRESHOLD_2_7V

typedef struct{
	unsigned char identifier; // don't change
	unsigned char powerControl;
	long count;
	unsigned char error;
	int temp;
	int hum;
}
nf1;
nf1 clientnf;

int DHTTemp, DHTHum;

//====================main========================
void main()
{
	__xdata __at(0x0100) long countloop;
	__xdata __at(0x0110) int sleep_counter;

	uint8_t ret;

	CLKLFCTRL = 1;
	rtc2_configure(RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ , 65535); //65535=2 сек, 32767=1 сек
	rtc2_run();
	pwr_clk_mgmt_wakeup_configure(PWR_CLK_MGMT_WAKEUP_CONFIG_OPTION_WAKEUP_ON_RTC2_TICK_ALWAYS,0);
	pwr_clk_mgmt_pwr_failure_configure(PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_ENABLE|POF);
	interrupt_control_global_enable();

	if ((PWRDWN&0x7)==0x3) {
		PWRDWN=0x0;
		RSTREAS=0x0;
		if (sleep_counter<(SEND_INTERVAL/2)) {
			sleep_counter++;
			pwr_clk_mgmt_enter_pwr_mode_memory_ret_tmr_on();
		}
		if (countloop < 2147483646) {
			countloop++;
		} else {
			countloop = 0;
		}
    	clientnf.count=countloop;
	} else {
		countloop = 0;
		clientnf.count = 0;
	}

	radiobegin();
	openAllPipe();

	setChannel(CHANNEL);
	setDataRate(SPEED);
	setAutoAck(AutoAck);
	setCRCLength(Crclength);
	setPALevel(PAlevel);

	clientnf.identifier=chclient;

	gpio_pin_configure(DHT_POWER_PIN,
			GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT |
			GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_CLEAR |
			GPIO_PIN_CONFIG_OPTION_PIN_MODE_OUTPUT_BUFFER_NORMAL_DRIVE_STRENGTH);
	gpio_pin_val_set(DHT_POWER_PIN);
	delay_ms(2000);
	ret = dht_read(&DHTTemp, &DHTHum);
	gpio_pin_val_clear(DHT_POWER_PIN);
	if (ret == DHT_NO_ERROR) {
		clientnf.temp = DHTTemp;
		clientnf.hum = DHTHum;
	} else {
		clientnf.temp = 0;
		clientnf.hum = 0;
	}
	clientnf.error = ret;

	if(pwr_clk_mgmt_is_vdd_below_bor_threshold()) { // power control
		clientnf.powerControl = 1; // < 2.7
	}else{
		clientnf.powerControl = 0; // > 2.7
	}

	rf_power_up(1);
	rf_write_tx_payload((const uint8_t*)&clientnf, 32, true);
	while(!(rf_irq_pin_active() && rf_irq_tx_ds_active()));
	rf_irq_clear_all();
	rf_power_down();
	sleep_counter=0;
	pwr_clk_mgmt_enter_pwr_mode_memory_ret_tmr_on();
}
