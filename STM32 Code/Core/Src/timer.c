/*
 * timer.c
 *
 *  Created on: Nov 1, 2023
 *      Author: nvnha
 */

#include "timer.h"

int timer_flag = 0;
int clock_timer = 0;

void setTimer(int duration)
{
	clock_timer = duration / 10;
	timer_flag = 0;
}

void timerRun()
{
	if(clock_timer > 0)
	{
		clock_timer--;
		if(clock_timer <= 0)
		{
			clock_timer = 0;
			timer_flag = 1;
		}
	}
}
