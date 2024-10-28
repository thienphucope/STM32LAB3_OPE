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
				if(NS>=100) NS = 1;
				updatebuffer();
			}

			if(isButtonPressed(2) == 1) {
				redtime = NS;
				yellowtime = redtime / 10;
				if (yellowtime <=0) yellowtime = 1;
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
				if (NS >= 100) NS = 1;
				updatebuffer();
			}

			if(isButtonPressed(2) == 1) {
				yellowtime = NS;
				redtime = yellowtime * 10;
				if (redtime >= 100) redtime = 99;
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
				if (NS >= 100) NS = 1;
				updatebuffer();
			}

			if(isButtonPressed(2) == 1) {
				greentime = NS;
				redtime = greentime * 10 / 9;
				if (redtime >= 100) redtime = 99;
				yellowtime = redtime - greentime;
			}
			break;

		default:
			break;
	}
}
