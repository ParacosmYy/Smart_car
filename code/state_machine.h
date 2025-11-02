/*
 * state_machine.h
 *
 *  Created on: 2025年10月21日
 *      Author: Paracosm
 */

#ifndef CODE_STATE_MACHINE_H_
#define CODE_STATE_MACHINE_H_

#include "zf_common_headfile.h"

extern uint8_t key_last_status[4] ;
extern uint8_t key_status[4] ;
extern uint8_t key_flag[4];
extern uint8_t key_gpio[4] ; // 假设KEY1~KEY4是宏定义

extern uint8_t dip_switch_flag[4];


typedef enum state_machine_enum
{
    image_value = 0,
    servo_value,
    motor_value,
    car_run_value,
}state_machine_enum ;

extern state_machine_enum state;

void key_check(uint16_t key_index);
uint8 key_state_check(void);
void key_init_all(void);
void key_check_all(void);
void dip_swithc_init();
void dip_switch_check_all();


#endif /* CODE_STATE_MACHINE_H_ */
