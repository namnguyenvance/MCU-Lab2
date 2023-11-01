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

void clear7SEG();
void display7SEG(int num);
void blinkLED();
void changeState();
void update7SEG(int index);
#endif /* SRC_LED_H_ */
