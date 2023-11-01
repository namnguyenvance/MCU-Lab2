/*
 * timer.c
 *
 *  Created on: Nov 1, 2023
 *      Author: nvnha
 */

#include "timer.h"

int state_counter = 0;
int LED_counter = 0;
int state_flag = 0;
int LED_flag = 0;

void setTimerState(int duration) {
	state_counter = duration / 10;
	state_flag = 0;
}
void setTimerLED(int duration) {
	LED_counter = duration / 10;
	LED_flag = 0;
}
void timerRun() {
	if (state_counter > 0) {
		state_counter--;
		if (state_counter <= 0) {
			state_flag = 1;
		}
	}
	if (LED_counter > 0) {
		LED_counter--;
		if (LED_counter <= 0) {
			LED_flag = 1;
		}
	}
}
