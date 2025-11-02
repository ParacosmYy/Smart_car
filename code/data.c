/*
 * data.c
 *
 *  Created on: 2025年10月31日
 *      Author: Paracosm
 */


#include "data.h"
//-----------define------------------------


#define GYRO_OFFSET_BUF_SIZE 32

//-----------pit中断变量---------------------
int pit_ch0_count  = 0 ;
int pit_ch1_count  = 0 ;

//------------测试变量-----------------------




float z_angle = 0;      // 累计角度（单位：度）
float dt = 0.01;        // 采样周期（单位：秒，根据实际情况设置）
