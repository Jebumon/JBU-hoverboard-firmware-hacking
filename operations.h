

#ifndef OPERATIONS_H
#define OPERATIONS_H
#include "gd32f1x0.h"
#include "define.h"

///////////////////////FOR LED and BUZER////////////////////////////
void RED_LED_ON(void);
void RED_LED_OFF(void);
void GREEN_LED_ON(void);
void GREEN_LED_OFF(void);
void BUZER_ON(void);
void BUZER_OFF(void);
//////////////////////////////////////////////////////////

//////////////////BLDC Commutation angles////////////////
void BLDC_angle_0(void);
void BLDC_angle_60(void);
void BLDC_angle_120(void);
void BLDC_angle_180(void);
void BLDC_angle_240(void);
void BLDC_angle_360(void);
/////////////////////////////////////////////////////////


#endif
