/*
 * Global.h
 *
 *  Created on: Sep 23, 2024;
 *      Author: HPVictus
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "FSM_Automatic.h"
#include "FSM_Manual.h"
#include "software_timer.h"
#include "led7.h"
#include "button.h"
#include "main.h"
#include "traffic_light.h"

extern int status;
extern int mode;

#define AUTO_INIT			0
#define AUTO_RED_GREEN		1
#define AUTO_RED_YELLOW		2
#define AUTO_GREEN_RED		3
#define AUTO_YELLOW_RED		4

#define MAN_INIT			5
#define MAN_RED				6
#define MAN_YELLOW			7
#define MAN_GREEN			8

#define NORMAL_MODE			9
#define MODIFY_RED_MODE		10
#define MODIFY_YELLOW_MODE	11
#define MODIFY_GREEN_MODE	12

extern int redtime;
extern int yellowtime;
extern int greentime;

#endif /* INC_GLOBAL_H_ */
