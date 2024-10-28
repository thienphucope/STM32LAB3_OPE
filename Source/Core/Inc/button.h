/*
 * button.h
 *
 *  Created on: 29 Sep 2024
 *      Author: HPVictus
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "Global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int numberbutton;
extern int button_flag[];

int isButtonPressed(int button_index);
int isButtonLongPressed(int button_index);
void subKeyProcess(int button_index);
void getKeyInput();

#endif /* INC_BUTTON_H_ */
