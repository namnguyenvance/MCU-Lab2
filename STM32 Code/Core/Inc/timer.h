/*
 * timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: nvnha
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int state_flag;
extern int LED_flag;

void setTimerState(int duration);
void setTimerLED(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
