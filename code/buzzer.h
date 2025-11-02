/*
 * buzzer.h
 *
 *  Created on: 2025Äê10ÔÂ31ÈÕ
 *      Author: Paracosm
 */

#ifndef CODE_BUZZER_H_
#define CODE_BUZZER_H_

#include "zf_common_headfile.h"

static inline void buzzer_on(void)  { gpio_high(P11_11); }
static inline void buzzer_off(void) { gpio_low(P11_11);  }

void buzzer_init(void);

#endif /* CODE_BUZZER_H_ */
