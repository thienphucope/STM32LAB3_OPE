/*
 * traffic_light.c
 *
 *  Created on: Oct 28, 2024
 *      Author: HPVictus
 */


#include "traffic_light.h"

void EW_RED(){
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
}
void EW_YELLOW(){
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
}
void EW_GREEN(){
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
}
void NS_RED(){
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
}
void NS_YELLOW(){
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
}
void NS_GREEN(){
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
}
void BLINK_RED(){
	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
	HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);

}
void BLINK_YELLOW(){
	HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
	HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);

}
void BLINK_GREEN(){
	HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
	HAL_GPIO_TogglePin(LED6_GPIO_Port, LED6_Pin);


}
