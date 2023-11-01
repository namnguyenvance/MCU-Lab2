/*
 * led.h
 *
 *  Created on: Nov 1, 2023
 *      Author: nvnha
 */

#ifndef SRC_LED_H_
#define SRC_LED_H_

#include "main.h"

extern int state;
extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];
extern int hour, minute, second;

void clear7SEG();
void display7SEG(int num);
void blinkLED();
void changeState();
void update7SEG(int index);
void updateClockBuffer();

#endif /* SRC_LED_H_ */
