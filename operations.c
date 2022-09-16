#include "gd32f1x0.h"
#include "define.h"
#include "operations.h"

///////////////////////RED LED ON////////////////////////

void RED_LED_ON(void){
	gpio_bit_set(RED_LED_OUT_PORT, RED_LED_OUT_PIN);
}
void RED_LED_OFF(void){
	gpio_bit_reset(RED_LED_OUT_PORT, RED_LED_OUT_PIN);
}
void GREEN_LED_ON(void){
	gpio_bit_set(GREEN_LED_OUT_PORT, GREEN_LED_OUT_PIN);
}
void GREEN_LED_OFF(void){
	gpio_bit_reset(GREEN_LED_OUT_PORT, GREEN_LED_OUT_PIN);
}
void BUZER_ON(void){
	gpio_bit_set(BUZER_OUT_PORT, BUZER_OUT_PIN);
}
void BUZER_OFF(void){
	gpio_bit_reset(BUZER_OUT_PORT, BUZER_OUT_PIN);
}

//////////////////BLDC Commutation angles////////////////
void BLDC_angle_0(void){

	gpio_bit_set(BLDC_Y_OUT_H_PORT , BLDC_Y_OUT_H_PIN); 		//		1
	gpio_bit_reset(BLDC_B_OUT_H_PORT , BLDC_B_OUT_H_PIN); 		//	0
	gpio_bit_reset(BLDC_G_OUT_H_PORT , BLDC_G_OUT_H_PIN); 		//	0
	gpio_bit_reset(BLDC_Y_OUT_L_PORT , BLDC_Y_OUT_L_PIN); 		//	0
	gpio_bit_reset(BLDC_B_OUT_L_PORT , BLDC_B_OUT_L_PIN); 		//	0
	gpio_bit_set(BLDC_G_OUT_L_PORT , BLDC_G_OUT_L_PIN); 		//		1

}
void BLDC_angle_60(void){

	gpio_bit_reset(BLDC_Y_OUT_H_PORT , BLDC_Y_OUT_H_PIN); 		//	0
	gpio_bit_reset(BLDC_B_OUT_H_PORT , BLDC_B_OUT_H_PIN); 		//	0
	gpio_bit_set(BLDC_G_OUT_H_PORT , BLDC_G_OUT_H_PIN); 		//		1
	gpio_bit_reset(BLDC_Y_OUT_L_PORT , BLDC_Y_OUT_L_PIN); 		//	0
	gpio_bit_reset(BLDC_B_OUT_L_PORT , BLDC_B_OUT_L_PIN); 		//	0
	gpio_bit_set(BLDC_G_OUT_L_PORT , BLDC_G_OUT_L_PIN); 		//		1
}
void BLDC_angle_120(void){
	
	gpio_bit_reset(BLDC_Y_OUT_H_PORT , BLDC_Y_OUT_H_PIN); 		//	0
	gpio_bit_set(BLDC_B_OUT_H_PORT , BLDC_B_OUT_H_PIN); 		//		1
	gpio_bit_set(BLDC_G_OUT_H_PORT , BLDC_G_OUT_H_PIN); 		//		1
	gpio_bit_reset(BLDC_Y_OUT_L_PORT , BLDC_Y_OUT_L_PIN); 		//	0
	gpio_bit_reset(BLDC_B_OUT_L_PORT , BLDC_B_OUT_L_PIN); 		//	0
	gpio_bit_reset(BLDC_G_OUT_L_PORT , BLDC_G_OUT_L_PIN); 		//	0

}
void BLDC_angle_180(void){
	
	gpio_bit_reset(BLDC_Y_OUT_H_PORT , BLDC_Y_OUT_H_PIN); 		//	0
	gpio_bit_set(BLDC_B_OUT_H_PORT , BLDC_B_OUT_H_PIN); 		//		1
	gpio_bit_reset(BLDC_G_OUT_H_PORT , BLDC_G_OUT_H_PIN); 		//	0
	gpio_bit_reset(BLDC_Y_OUT_L_PORT , BLDC_Y_OUT_L_PIN); 		//	0
	gpio_bit_set(BLDC_B_OUT_L_PORT , BLDC_B_OUT_L_PIN); 		//		1
	gpio_bit_reset(BLDC_G_OUT_L_PORT , BLDC_G_OUT_L_PIN); 		//	0

}
void BLDC_angle_240(void){

	gpio_bit_reset(BLDC_Y_OUT_H_PORT , BLDC_Y_OUT_H_PIN); 		//	0
	gpio_bit_reset(BLDC_B_OUT_H_PORT , BLDC_B_OUT_H_PIN); 		//	0
	gpio_bit_reset(BLDC_G_OUT_H_PORT , BLDC_G_OUT_H_PIN); 		//	0
	gpio_bit_set(BLDC_Y_OUT_L_PORT , BLDC_Y_OUT_L_PIN); 		//		1
	gpio_bit_set(BLDC_B_OUT_L_PORT , BLDC_B_OUT_L_PIN); 		//		1
	gpio_bit_reset(BLDC_G_OUT_L_PORT , BLDC_G_OUT_L_PIN); 		//	0
}
void BLDC_angle_360(void){

	gpio_bit_set(BLDC_Y_OUT_H_PORT , BLDC_Y_OUT_H_PIN); 		//		1
	gpio_bit_reset(BLDC_B_OUT_H_PORT , BLDC_B_OUT_H_PIN); 		//	0
	gpio_bit_reset(BLDC_G_OUT_H_PORT , BLDC_G_OUT_H_PIN); 		//	0
	gpio_bit_set(BLDC_Y_OUT_L_PORT , BLDC_Y_OUT_L_PIN); 		//		1
	gpio_bit_reset(BLDC_B_OUT_L_PORT , BLDC_B_OUT_L_PIN); 		//	0
	gpio_bit_reset(BLDC_G_OUT_L_PORT , BLDC_G_OUT_L_PIN); 		//	0
}

/////////////////////////////////////////////////////////
