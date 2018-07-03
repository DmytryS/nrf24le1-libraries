#include "../libs.h"
#include "../nRFLE.c"
#include "../libraries/ssd1306/ssd1306.c"

void main()
{
   // Setup I2C
   pwr_clk_mgmt_cclk_configure(PWR_CLK_MGMT_CCLK_CONFIG_OPTION_CLK_FREQ_16_MHZ);
   delay_s(1);

   w2_configure(W2_CONFIG_OPTION_CLOCK_FREQ_100_KHZ | W2_CONFIG_OPTION_MODE_MASTER | W2_CONFIG_OPTION_ENABLE, 0);
   w2_enable();
   interrupt_control_global_disable();
   delay_s(1);

   printf("Init LED\n\r");
   LED_Init();
   printf("Print message\n\r");
   while(1)
   {
	    LED_P6x8Str(23,0,"welcome to");
	    LED_P6x8Str(40,2,"Smart");
	    LED_P6x8Str(20,4,"Prototyping");
	    LED_CLS();
   }
}


