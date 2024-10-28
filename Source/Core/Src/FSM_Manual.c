/*
 * FSM_Manual.c
 *
 *  Created on: Sep 23, 2024
 *      Author: HPVictus
 */


#include "FSM_Manual.h"

void init_manual(){

}

void fsm_manual(){
	switch (mode) {
	    case NORMAL_MODE:
	    	if (isButtonPressed(0) == 1) {
	    		mode = MODIFY_RED_MODE;
	    		status = MAN_RED;
	    		setTimer(0,50);
	    		EW = 2;
	    		NS = redtime;
	    		updatebuffer();
	    		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    	}
	        break;
	    case MODIFY_RED_MODE:

	    	if (isButtonPressed(0) == 1) {
	    		mode = MODIFY_YELLOW_MODE;
	    		status = MAN_YELLOW;
	    		setTimer(0,50);
	    		EW = 3;
	    		NS = yellowtime;
	    		updatebuffer();
	    		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    	}
	        break;
	    case MODIFY_YELLOW_MODE:

	    	if (isButtonPressed(0) == 1) {
	    		mode = MODIFY_GREEN_MODE;
	    		status = MAN_GREEN;
	    		setTimer(0,50);
				EW = 4;
				NS = greentime;
				updatebuffer();
	    		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	    		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	    		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	    		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	    		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	    		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	    	}
	        break;
	    case MODIFY_GREEN_MODE:

	    	if (isButtonPressed(0) == 1) {
	    		mode = NORMAL_MODE;
	    		status = AUTO_INIT;
	    	}
	        break;
	    default:
	    	break;
	}
}
