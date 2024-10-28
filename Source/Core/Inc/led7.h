/*
 * led7.h
 *
 *  Created on: 8 Oct 2024
 *      Author: HPVictus
 */

#ifndef INC_LED7_H_
#define INC_LED7_H_

#include "Global.h"

void display7SEG(int num);
extern int NS;
extern int EW;
extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];
void update7SEG(int index);
void updatebuffer();
void LED7();
#endif /* INC_LED7_H_ */
