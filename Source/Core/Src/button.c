/*
 * button.c
 *
 *  Created on: 29 Sep 2024
 *      Author: HPVictus
 */

#include "button.h"


int numberbutton = 3;
int KeyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimeOutForKeyPress[3] = {500, 500, 500};
int button_pressed[3] = {0, 0, 0};
int button_long_pressed[3] = {0, 0, 0};
int button_flag[3] = {0, 0, 0};


int isButtonPressed(int button_index){
	if(button_flag[button_index] == 1){
		button_flag[button_index] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPressed(int button_index){
	if(button_long_pressed[button_index] == 1){
		button_long_pressed[button_index] = 0;
		return 1;
	}
	return 0;
}


void subKeyProcess(int button_index){
	button_flag[button_index] = 1;
}


void getKeyInput(){
	for (int i = 0; i < numberbutton; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];


		if (i == 0) {
					KeyReg0[i] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
				}
		if (i == 1) {
					KeyReg0[i] = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
				}
		if (i == 2) {
					KeyReg0[i] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
				}


		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg2[i] != KeyReg3[i]){
				KeyReg3[i] = KeyReg2[i];


				if (KeyReg3[i] == PRESSED_STATE){
					TimeOutForKeyPress[i] = 500;
					subKeyProcess(i);
				}
			}else{

				TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0){
					TimeOutForKeyPress[i] = 500;
					if (KeyReg3[i] == PRESSED_STATE){
						button_long_pressed[i] = 1;
					}
				}
			}
		}
	}
}
