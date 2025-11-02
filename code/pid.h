/*
 * pid.h
 *
 *  Created on: 2025年10月19日
 *      Author: Paracosm
 */

#ifndef CODE_PID_H_
#define CODE_PID_H_

typedef struct {
    float kp, ki, kd;
    float integral;
    float prev_err;
    float output;
} PosPID_t;

typedef struct {
    float kp, ki, kd;
    float prev_err, prev_prev_err;
    float output;
} IncPID_t;

void PosPID_Init(PosPID_t *pid, float kp, float ki, float kd);
void IncPID_Init(IncPID_t *pid, float kp, float ki, float kd);
float PosPID_Calc(PosPID_t *pid, float target, float feedback);
float IncPID_Calc(IncPID_t *pid, float target, float feedback);
float cascade_pid_control(PosPID_t *steer_pid, PosPID_t *gyro_pid, IncPID_t *speed_pid,
                          float steer_target, float steer_feedback,
                          float gyro_feedback, float speed_feedback);
float servo_pid_contorl(PosPID_t *steer_pid , float steer_target , float steer_feedback);
float motor_pid_control(IncPID_t *motor_pid, float speed_target, float speed_feedback);


extern int pit_ch0_count  ;
extern int pit_ch1_count   ;
extern float servo_pid_output ;
extern PosPID_t servo_pid ;
extern PosPID_t gyro_pid ;
extern IncPID_t left_motor_pid ;
extern IncPID_t right_motor_pid ;

extern float z_angle ;      // 累计角度（单位：度）
extern float dt ;        // 采样周期（单位：秒，根据实际情况设置）


extern int left_encoder_speed;
extern int right_encoder_speed;

extern float left_motor_pid_output ;
extern float right_motor_pid_output ;

#endif /* CODE_PID_H_ */
