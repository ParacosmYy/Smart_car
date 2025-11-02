/*
 * data.h
 *
 *  Created on: 2025年10月31日
 *      Author: Paracosm
 */

#ifndef CODE_DATA_H_
#define CODE_DATA_H_

#include "zf_common_headfile.h"

#define GYRO_OFFSET_BUF_SIZE 32

extern int pit_ch0_count  ;
extern int pit_ch1_count   ;


//extern uint16_t count  ;



extern float z_angle ;      // 累计角度（单位：度）
extern float dt ;        // 采样周期（单位：秒，根据实际情况设置）

#endif /* CODE_DATA_H_ */
