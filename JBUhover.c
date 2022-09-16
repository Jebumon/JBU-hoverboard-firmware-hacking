#include <gd32f1x0.h>
#include <gd32f1x0_adc.h>
#include <gd32f1x0_gpio.h>
#include <gd32f1x0_exti.h>
#include <gd32f1x0_libopt.h>
#include <gd32f1x0_misc.h>
#include <gd32f1x0_rcu.h>
#include <gd32f1x0_usart.h>

#include "gd32f1x0.h"
#include "systick.h"
#include "initialization.h"
#include "define.h"
#include "operations.h"

//#define NUM_LEDS  (2)                   /* Number of available LEDs           */

/* LED Pins: GPIOF.6..7 */
//const uint32_t led_mask[] = {1UL << 6, 1UL << 7};


static uint32_t commutation_delay;

void delay(int time);

void delay(int time)
{
	int i,j;
	for (i = 0; i< time; i++)
			{
				for(j=0; j<1000; j++);
			
			}
}

//int32_t LED_Initialize (void) {

  

  //LED_SetOut (0);                                 /* switch LEDs off          */

//  return 0;
//}

int main(void)
{
	// RCU_AHBEN  |=  (1UL << 22);                  /* Enable GPIOF clock         */
	/*
  GPIO_CTL(GPIOF)  &= ~((3UL << 2*6) | (3UL << 2*7));
  GPIO_CTL(GPIOF)  |=  ((1UL << 2*6) | (1UL << 2*7));
  GPIO_OMODE(GPIOF) &= ~((1UL <<   6) | (1UL <<   7));
  GPIO_OSPD(GPIOF)  &= ~((3UL << 2*6) | (3UL << 2*7));
  GPIO_OSPD(GPIOF)  |=  ((1UL << 2*6) | (1UL << 2*7));
  GPIO_PUD(GPIOF)  &= ~((3UL << 2*6) | (3UL << 2*7)); 
	*/
	
	 /* enable the LED clock */
   // rcu_periph_clock_enable(RCU_GPIOA);

    /* configure led GPIO port */
    /*gpio_mode_set(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE,GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_15);
    gpio_output_options_set(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ,GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_15);

    gpio_bit_reset(GPIOA, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_15);
	
	/////////////////////////////Buzer////////////////////////////////
		rcu_periph_clock_enable(RCU_GPIOB);
		gpio_mode_set(GPIOB, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE,GPIO_PIN_9 | GPIO_PIN_3 | GPIO_PIN_4);
    gpio_output_options_set(GPIOB, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ,GPIO_PIN_9 | GPIO_PIN_3 | GPIO_PIN_4);
    gpio_bit_reset(GPIOB, GPIO_PIN_9 | GPIO_PIN_3 | GPIO_PIN_4);
////////////////////////////////////////////////////////////////////

///////////////////////BLDC Bridge//////////////////////
		gpio_mode_set(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10);
		gpio_output_options_set(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10);
		*/
		
    /* setup SysTick Timer for 1ms interrupts  */
		
    systick_config();
		
		GPIO_Init();
		
		commutation_delay = 500;
	
	
	while(1)
		{

		BLDC_angle_0();	
			RED_LED_ON();			// led and buzer
			GREEN_LED_OFF();
			BUZER_ON();
			
			
		delay_10us(commutation_delay);
			
		BLDC_angle_60();
	
		delay_10us(commutation_delay);			
			
		BLDC_angle_120();	
				
		delay_10us(commutation_delay);
			
		BLDC_angle_180();	
			RED_LED_OFF();			// led and buzer
			GREEN_LED_ON();
			BUZER_OFF();
				
		delay_10us(commutation_delay);
				
		BLDC_angle_240();	
				
		delay_10us(commutation_delay);
			
		BLDC_angle_360();	
			
		delay_10us(commutation_delay);
	
		//gpio_bit_set(GPIOA, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_15);
		//gpio_bit_set(GPIOB, GPIO_PIN_9 | GPIO_PIN_3 | GPIO_PIN_4 );
			
		//delay_10us(100);
		
		//delay_1ms(1);
		
		//gpio_bit_reset(GPIOA, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_15);
		//gpio_bit_reset(GPIOB, GPIO_PIN_9 | GPIO_PIN_3 | GPIO_PIN_4);
		
		//delay_10us(100);
		//delay_1ms(1);
		
		}




}

