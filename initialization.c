
#include "gd32f1x0.h"
#include "initialization.h"
#include "define.h"



void GPIO_Init(void){

	// Enable all GPIO clocks
	rcu_periph_clock_enable(RCU_GPIOA);
	rcu_periph_clock_enable(RCU_GPIOB);
	rcu_periph_clock_enable(RCU_GPIOC);
	rcu_periph_clock_enable(RCU_GPIOF);

	
  //gpio_mode_set(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE,GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_15);
	//gpio_mode_set(TIMER_BLDC_GH_PORT, GPIO_MODE_AF, GPIO_PUPD_NONE, TIMER_BLDC_GH_PIN);
	
	//////////////////////////////////FOR LED/////////////////////////////////////////////
	gpio_mode_set(RED_LED_OUT_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, RED_LED_OUT_PIN | GREEN_LED_OUT_PIN);
	//gpio_mode_set(GREEN_LED_OUT_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GREEN_LED_OUT_PIN);
	gpio_output_options_set(RED_LED_OUT_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, RED_LED_OUT_PIN | GREEN_LED_OUT_PIN);	
	//////////////////////////////////////////////////////////////////////////////////////
	
	//////////////////////////////////FOR BUZER///////////////////////////////////////////
	gpio_mode_set(BUZER_OUT_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, BUZER_OUT_PIN);
	gpio_output_options_set(BUZER_OUT_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, BUZER_OUT_PIN);
	//////////////////////////////////////////////////////////////////////////////////////
	
	
	//////////////////////////////////FOR BLDC////////////////////////////////////////////
	gpio_mode_set(BLDC_Y_OUT_H_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, BLDC_Y_OUT_H_PIN);
	gpio_mode_set(BLDC_B_OUT_H_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, BLDC_B_OUT_H_PIN);
	gpio_mode_set(BLDC_G_OUT_H_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, BLDC_G_OUT_H_PIN);
	gpio_mode_set(BLDC_Y_OUT_L_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, BLDC_Y_OUT_L_PIN);
	gpio_mode_set(BLDC_B_OUT_L_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, BLDC_B_OUT_L_PIN);
	gpio_mode_set(BLDC_G_OUT_L_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, BLDC_G_OUT_L_PIN);

  //gpio_output_options_set(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ,GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_15);
	//gpio_output_options_set(TIMER_BLDC_GH_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, TIMER_BLDC_GH_PIN);
	gpio_output_options_set(BLDC_Y_OUT_H_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, BLDC_Y_OUT_H_PIN);
	gpio_output_options_set(BLDC_B_OUT_H_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, BLDC_B_OUT_H_PIN);
	gpio_output_options_set(BLDC_G_OUT_H_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, BLDC_G_OUT_H_PIN);
	gpio_output_options_set(BLDC_Y_OUT_L_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, BLDC_Y_OUT_L_PIN);
	gpio_output_options_set(BLDC_B_OUT_L_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, BLDC_B_OUT_L_PIN);
	gpio_output_options_set(BLDC_G_OUT_L_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, BLDC_G_OUT_L_PIN);
	////////////////////////////////////////////////////////////////////////////////////////

	

	
	

}
