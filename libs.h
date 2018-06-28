// описание библиотек для работы с модулем nRF24LE1
// http://homes-smart.ru/index.php/oborudovanie/bez-provodov-2-4-ggts/opisanie-radiomodulya-nrf24l01



#include <stdio.h>
#include <stdint.h>

#include "reg24le1.h"
#include "rf.h"
#include "delay.h"

#include "wiringLE.c"


// rf
#include "sdk/src/rf/src/rf_read_rx_payload.c"
//#include "src/rf/src/rf_configure_debug_lite.c"
#include "sdk/src/rf/src/rf_write_register.c"
#include "sdk/src/rf/src/rf_spi_configure_enable.c"
#include "sdk/src/rf/src/rf_write_tx_payload.c"
#include "sdk/src/rf/src/rf_transmit.c"
#include "sdk/src/rf/src/rf_set_as_rx.c"
#include "sdk/src/rf/src/rf_irq_clear_all.c"
#include "sdk/src/rf/src/rf_set_as_tx.c"
#include "sdk/src/rf/src/rf_spi_execute_command.c"
#include "sdk/src/rf/src/rf_spi_send_read.c"
#include "sdk/src/rf/src/rf_power_up_param.c"
#include "sdk/src/rf/src/rf_read_register.c"
#include "sdk/src/rf/src/rf_spi_send_read_byte.c"
#include "sdk/src/rf/src/rf_set_rx_addr.c"
#include "sdk/src/rf/src/rf_power_down.c"
#include "sdk/src/rf/src/rf_power_up.c"

// gpio
#include "sdk/src/gpio/src/gpio_pin_configure.c"
#include "sdk/src/gpio/src/gpio_pin_val_read.c"
#include "sdk/src/gpio/src/gpio_pin_val_clear.c"
#include "sdk/src/gpio/src/gpio_pin_val_set.c"
#include "sdk/src/gpio/src/gpio_pin_val_write.c"

// delay
#include "sdk/src/delay/src/delay_us.c"
#include "sdk/src/delay/src/delay_s.c"
#include "sdk/src/delay/src/delay_ms.c"

// pwm (ШИМ)
#include "sdk/src/pwm/src/pwm_configure.c"
#include "sdk/src/pwm/src/pwm_start.c"

// управление питанием ,необходимо для watchdog
#include "sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_clklf_configure.c"
#include "sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c"
#include "sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_wakeup_configure.c"
#include "sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_pwr_failure_configure.c"
// watchdog
#include "sdk/src/watchdog/src/watchdog_set_wdsv_count.c"
#include "sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c"


// прерывания
#include "sdk/src/interrupt/src/interrupt_configure_ifp.c"

// ADC (АЦП)
#include "sdk/src/adc/src/adc_configure.c"
#include "sdk/src/adc/src/adc_set_input_channel.c"
#include "sdk/src/adc/src/adc_start_single_conversion.c"
#include "sdk/src/adc/src/adc_start_single_conversion_get_value.c"

//таймеры
#include "sdk/src/timer0/src/timer0_configure.c"

#include "sdk/src/timer1/src/timer1_configure.c"

// uart
#if 0
#include "sdk/src/uart/src/uart_configure_manual_baud_calc.c"
#include "sdk/src/uart/src/uart_calc_actual_baud_rate_from_s0rel.c"
#include "sdk/src/uart/src/uart_calc_actual_baud_rate_from_th1.c"
#include "sdk/src/uart/src/uart_calc_s0rel_value.c"
#include "sdk/src/uart/src/uart_calc_th1_value.c"
#include "sdk/src/uart/src/uart_configure_auto_baud_calc.c"
#endif

// I2C
#if 0
#include "sdk/src/w2/src/w2_src.h"
#include "sdk/src/w2/src/w2_configure.c"
#include "sdk/src/w2/src/w2_master_cur_address_read.c"
#include "sdk/src/w2/src/w2_master_process_start_request.c"
#include "sdk/src/w2/src/w2_master_process_stop_request.c"
#include "sdk/src/w2/src/w2_master_random_address_read.c"
#include "sdk/src/w2/src/w2_master_rx_byte.c"
#include "sdk/src/w2/src/w2_master_software_reset.c"
#include "sdk/src/w2/src/w2_master_tx_byte.c"
#include "sdk/src/w2/src/w2_master_write_control_bytes.c"
#include "sdk/src/w2/src/w2_master_write_to.c"
#include "sdk/src/w2/src/w2_wait_for_byte_tx_or_rx.c"
#endif

// flash memory read/write
#if 0
#include "sdk/src/memory/src/memory_flash_does_address_exist_in_flash.c"
#include "sdk/src/memory/src/memory_flash_erase_page.c"
#include "sdk/src/memory/src/memory_flash_get_page_num_from_address.c"
#include "sdk/src/memory/src/memory_flash_read_byte.c"
#include "sdk/src/memory/src/memory_flash_read_bytes.c"
#include "sdk/src/memory/src/memory_flash_write_byte.c"
#include "sdk/src/memory/src/memory_flash_write_bytes.c"
#endif

#include "sdk/src/rtc2/src/rtc2_configure.c"
