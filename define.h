
#ifndef DEFINE_H
#define DEFINE_H
#include "gd32f1x0.h"

/////////////////FOR LED//////////////////
#define RED_LED_OUT_PIN GPIO_PIN_4				//RED LED
#define RED_LED_OUT_PORT GPIOB
#define GREEN_LED_OUT_PIN GPIO_PIN_3			//GREEN LED
#define GREEN_LED_OUT_PORT GPIOB
//////////////////////////////////////////

/////////////////FOR BUZER////////////////
#define BUZER_OUT_PIN GPIO_PIN_9					//BUZER
#define BUZER_OUT_PORT GPIOB
//////////////////////////////////////////

////////////////FOR BLDC /////////////////

#define BLDC_Y_OUT_H_PIN GPIO_PIN_15
#define BLDC_B_OUT_H_PIN GPIO_PIN_14
#define BLDC_G_OUT_H_PIN GPIO_PIN_13
#define BLDC_Y_OUT_L_PIN GPIO_PIN_10
#define BLDC_B_OUT_L_PIN GPIO_PIN_9
#define BLDC_G_OUT_L_PIN GPIO_PIN_8

#define BLDC_Y_OUT_H_PORT GPIOB
#define BLDC_B_OUT_H_PORT GPIOB
#define BLDC_G_OUT_H_PORT GPIOB
#define BLDC_Y_OUT_L_PORT GPIOA
#define BLDC_B_OUT_L_PORT GPIOA
#define BLDC_G_OUT_L_PORT GPIOA

//////////////////////////////////////////









#endif
