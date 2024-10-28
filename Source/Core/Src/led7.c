/*
 * led7.c
 *
 *  Created on: Sep 24, 2024
 *      Author: HPVictus
 */

#include "led7.h"

void display7SEG(int num)
{
	switch(num)
	{
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

const int MAX_LED = 4;  // We've got 4 segments to play with
int index_led = 0;      // Keeps track of which 7-segment display to update
int led_buffer[4] = {30, 30};  // Buffer holds values for each segment
int NS = 30, EW = 30;

void update7SEG(int index) {
    switch (index) {
        case 0:
            // Display the first 7-segment display with led_buffer[0]
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
            display7SEG(led_buffer[0]);  // Assuming there's a function to show the value

            break;
        case 1:
            // Display the second 7-segment display with led_buffer[1]
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
            display7SEG(led_buffer[1]);

            break;
        case 2:
            // Display the third 7-segment display with led_buffer[2]
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
            display7SEG(led_buffer[2]);
            break;
        case 3:
            // Display the fourth 7-segment display with led_buffer[3]
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
            display7SEG(led_buffer[3]);
            break;
        default:
            // Just in case something wild happens and index is out of range
            break;
    }
}
void updatebuffer(){
	led_buffer[0] = EW/10;
	led_buffer[1] = EW%10;
	led_buffer[2] = NS/10;
	led_buffer[3] = NS%10;
}
void LED7(){
	if (timer_flag[2] == 1){
		setTimer(2, 25);
		update7SEG(index_led);
		updatebuffer();
		index_led++;
		if (index_led >= MAX_LED) index_led = 0;
	}
}


