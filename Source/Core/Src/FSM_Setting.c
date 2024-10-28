/*
 * FSM_Setting.c
 *
 *  Created on: 26 Oct 2024
 *      Author: HPVictus
 */


#include "FSM_Setting.h"
void fsm_setting() {
	switch(status) {
		case MAN_RED:
			if(timer_flag[0] == 1) {
				setTimer(0, 50);
				BLINK_RED();
			}



			if(isButtonPressed(1) == 1) {
				NS++;
				if(NS>19) NS = 0;
				updatebuffer();
			}

			if(isButtonPressed(2) == 1) {
				redtime = NS;
				yellowtime = redtime * 10 / 100;
				if (yellowtime > 3) yellowtime = 3;
				greentime = redtime - yellowtime;
			}
			break;

		case MAN_YELLOW:
			if(timer_flag[0] == 1) {
				setTimer(0, 50);
				BLINK_YELLOW();
			}


			if(isButtonPressed(1) == 1) {
				NS++;
				if (NS > 98) NS = 0;
				updatebuffer();
			}

			if(isButtonPressed(2) == 1) {
				yellowtime = NS;
				redtime = yellowtime * 100 / 10;
				if (redtime > 99) redtime = 99;
				greentime = redtime - yellowtime;
			}
			break;

		case MAN_GREEN:
			if(timer_flag[0] == 1) {
				setTimer(0, 50);
				BLINK_GREEN();
			}


			if(isButtonPressed(1) == 1) {
				NS++;
				if (NS > 98) NS = 0;
				updatebuffer();
			}

			if(isButtonPressed(2) == 1) {
				greentime = NS;
				redtime = redtime * 100 / 90;
				if (redtime > 99) redtime = 99;
				yellowtime = redtime - greentime;
			}
			break;

		default:
			break;
	}
}
