/*
 * fsm_automatic_sch.h
 *
 *  Created on: Nov 20, 2024
 *      Author: quyng
 */
#include "main.h"
#ifndef INC_FSM_AUTOMATIC_SCH_H_
#define INC_FSM_AUTOMATIC_SCH_H_
extern  int remaining_time1 ;
extern  int remaining_time2 ;

void task_update_time1();
void task_update_time2();
void task_display_7seg1();
void task_display_7seg2();
void task_fsm1();
void task_fsm2();


#endif /* INC_FSM_AUTOMATIC_SCH_H_ */
