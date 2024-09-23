/*
 * FSM_Automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: HPVictus
 */


#include "FSM_Automatic.h"

void init_automatic(){

}

void run_automatic(){
    // create switch case (status)
	// if (timer_flag) -> chuyern trang thai tu dong
	// if (button_flag) -> chuyern sang manual { status = manual_status(green_red) ; reset button_flag = 0 khong thi nos chay tiep setTimer2(10000) ve trang thai auto}
	switch (status){
	case AUTO_INIT:
		break;
	case AUTO_RED_GREEN:
		//TODO
		break;
	case AUTO_RED_YELLOW:
		//TODO
		break;
	case AUTO_GREEN_RED:
		break;
	case AUTO_YELLOW_RED:
		break;
	default:
		break;

	}
}
