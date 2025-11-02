/*
 * servo.c
 *
 *  Created on: 2025年10月21日
 *      Author: Paracosm
 */

#include "servo.h"
#define servo_mid 678
#define servo_max 678+63
#define servo_min 678-63

uint32 servo_duty = 0;

void servo_init(void)
{
    pwm_init (ATOM1_CH1_P33_9 , 50, 692);
}

//居中 750  打满 250/1250
void set_servo_angle(uint32 duty)
{
    servo_duty = duty ;
    pwm_set_duty(ATOM1_CH1_P33_9 , servo_duty);
}

