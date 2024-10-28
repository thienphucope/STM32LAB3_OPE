/*
 * FSM_Automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: HPVictus
 */


#include "FSM_Automatic.h"

void init_automatic(){
	status = AUTO_RED_GREEN;
	EW = redtime - 1;
	NS = greentime - 1;
	updatebuffer();
	setTimer(1, 100);

}

// create switch case (status)
// if (timer_flag) -> chuyern trang thai tu dong
// if (button_flag) -> chuyern sang manual { status = manual_status(green_red) ; reset button_flag = 0 khong thi nos chay tiep setTimer2(10000) ve trang thai auto}
void fsm_automatic(){
	switch(status){
	case AUTO_INIT:
		init_automatic();
		break;
	case AUTO_RED_GREEN:
		//LED
		EW_RED();
		NS_GREEN();
		//LED7
		if (timer_flag[1] == 1){
			setTimer(1, 100);
			EW--; NS--;

		}



		//CONDITION
		if (NS < 0) {
			status = AUTO_RED_YELLOW;
			NS = yellowtime - 1;

			setTimer(0, yellowtime * 100);
		}
		break;
	case AUTO_RED_YELLOW:
		EW_RED();
		NS_YELLOW();

		if (timer_flag[1] == 1){
			setTimer(1, 100);
			EW--; NS--;

		}

		if (NS < 0) {
			status = AUTO_GREEN_RED;
			EW = greentime - 1;
			NS = redtime - 1;

			setTimer(0, greentime * 100);
		}
		break;
	case AUTO_GREEN_RED:

		EW_GREEN();
		NS_RED();


		if (timer_flag[1] == 1){
			setTimer(1, 100);
			EW--; NS--;


		}

		if (EW < 0) {
			status = AUTO_YELLOW_RED;
			EW = yellowtime - 1;

			setTimer(0, yellowtime * 100);

		}
		break;
	case AUTO_YELLOW_RED:

		EW_YELLOW();
		NS_RED();

		if (timer_flag[1] == 1){
			setTimer(1, 100);
			EW--; NS--;

		}

		if (EW < 0){
			status = AUTO_RED_GREEN;
			EW = redtime - 1;
			NS = greentime - 1;

			setTimer(0, greentime * 100);
		}
		break;

	default:
		break;
	}
}

