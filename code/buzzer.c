/*
 * buzzer.c
 *
 *  Created on: 2025年10月31日
 *      Author: Paracosm
 */

#include "buzzer.h"

    // 打开和关闭


void buzzer_init(void)
{
    // 初始化（假设用的是 P11_11 这根脚）
    gpio_init(P11_11, GPO, GPIO_LOW, GPO_PUSH_PULL);  // 初始拉低，蜂鸣器关闭
}

