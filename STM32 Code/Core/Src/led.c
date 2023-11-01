/*
 * led.c
 *
 *  Created on: Nov 1, 2023
 *      Author: nvnha
 */

#include "led.h"

int state = 0;

/* buffer variable */
const int MAX_LED = 4;
int index_led = 3;
int led_buffer[4] = {1 , 2 , 3 , 4};

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
	  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	  		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
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

void blinkLED() {
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin | DOT_Pin);
}

void changeState() {
	switch (state) {
		case 0:
			state = 1;
			HAL_GPIO_TogglePin(GPIOA, EN0_Pin);
			clear7SEG();
			display7SEG(led_buffer[0]);
			break;
		case 1:
			state = 2;
			HAL_GPIO_TogglePin(GPIOA, EN0_Pin | EN1_Pin);
			clear7SEG();
			display7SEG(led_buffer[1]);
			break;
		case 2:
			state = 3;
			HAL_GPIO_TogglePin(GPIOA, EN1_Pin | EN2_Pin);
			clear7SEG();
			display7SEG(led_buffer[2]);
			break;
		case 3:
			state = 4;
			HAL_GPIO_TogglePin(GPIOA, EN2_Pin | EN3_Pin);
			clear7SEG();
			display7SEG(led_buffer[3]);
		case 4:
			state = 1;
			HAL_GPIO_TogglePin(GPIOA, EN3_Pin | EN0_Pin);
			clear7SEG();
			display7SEG(led_buffer[0]);
		default:
			break;
	}
}

void update7SEG(int index) {
	switch (index) {
		case 0:
			changeState();
			break;
		case 1:
			changeState();
			break;
		case 2:
			changeState();
			break;
		case 3:
			changeState();
			break;
		default:
			break;
	}
}
