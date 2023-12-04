/*
 * software_timer.h
 *
 *  Created on: Dec 4, 2023
 *      Author: Huy Minh
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"

int timer1_counter;
int timer1_flag;

void setTimer1(int duration);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
