/*
 * servo.h
 *
 *  Created on: 2025Äê10ÔÂ21ÈÕ
 *      Author: Paracosm
 */

#ifndef CODE_SERVO_H_
#define CODE_SERVO_H_

#include "zf_common_headfile.h"

extern uint32 servo_duty ;

void servo_init(void);
void set_servo_angle(uint32 duty);
#endif /* CODE_SERVO_H_ */
