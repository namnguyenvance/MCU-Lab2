/*
 * led.c
 *
 *  Created on: Nov 1, 2023
 *      Author: nvnha
 */

#include "led.h"

int state = 0;

// buffer variable
const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1 , 2 , 3 , 4};

// clock variable
int hour = 6, minute = 50, second = 8;

void display7SEG(int num) {
	if (num >= 0 && num < 10) {
		switch (num) {
		case 0:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	  		break;
		case 1:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	  		break;
		case 2:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		break;
		case 3:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		break;
		case 4:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		break;
		case 5:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		break;
		case 6:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		break;
		case 7:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	  		break;
		case 8:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		break;
		case 9:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		break;
		default:
			break;
		}
	}
}

void clear7SEG() {
	HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin | SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, 1);
}

void initState() {
	state = 0;
}

void setState(int state) {
	switch(state) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin, 0);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, EN1_Pin, 0);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, EN2_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, EN3_Pin, 0);
			break;
		default:
			break;
	}
}

void clearState() {
	HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, 1);
}

void blinkLED() {
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin | DOT_Pin);
}


void displayClock(int hour, int minute) {
	switch (state) {
		case 0:
			clearState();
			clear7SEG();
			setState(state);
			display7SEG(hour / 10);
			state++;
			break;
		case 1:
			clearState();
			clear7SEG();
			setState(state);
			display7SEG(hour % 10);
			state++;
			break;
		case 2:
			clearState();
			clear7SEG();
			setState(state);
			display7SEG(minute / 10);
			state++;
			break;
		default:
			clearState();
			clear7SEG();
			setState(state);
			display7SEG(minute % 10);
			state = 0;
			break;
	}
}

void update7SEG(int index) {
	switch(index) {
		case 0:
			clearState();
			clear7SEG();
			setState(index);
			display7SEG(led_buffer[index]);
			break;
		case 1:
			clearState();
			clear7SEG();
			setState(index);
			display7SEG(led_buffer[index]);
			break;
		case 2:
			clearState();
			clear7SEG();
			setState(index);
			display7SEG(led_buffer[index]);
			break;
		case 3:
			clearState();
			clear7SEG();
			setState(index);
			display7SEG(led_buffer[index]);
			break;
		default:
			break;
	}
}

void updateClockBuffer()
{
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
