/*
 * fsm_manual_sch.h
 *
 *  Created on: Nov 20, 2024
 *      Author: quyng
 */
#include "main.h"
#include "global.h"

#ifndef INC_FSM_MANUAL_SCH_H_
#define INC_FSM_MANUAL_SCH_H_
void display_buffer1();
void display_buffer2();
void change_mode_sch(int mode );
void displayDuration_sch(int mode, int duration);
void toggle_red();
void toggle_yellow();
void toggle_green();
void fsm_manual_run_sch();



#endif /* INC_FSM_MANUAL_SCH_H_ */
