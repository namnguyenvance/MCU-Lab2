/*
 * timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: nvnha
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer_flag;
extern int clock_timer;

void setTimer(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
