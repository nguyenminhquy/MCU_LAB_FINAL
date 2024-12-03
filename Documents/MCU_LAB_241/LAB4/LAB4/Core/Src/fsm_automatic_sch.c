/*
 * fsm_automatic_sch.c
 *
 *  Created on: Nov 20, 2024
 *      Author: quyng
 */

#include "scheduler.h"
#include "led.h"
#include "7seg.h"
#include "global.h"
#include "button.h"




void task_update_time1() {
    if (remaining_time1 > 0) {
        remaining_time1--;
        updatebuffer1(remaining_time1);
    }
}

void task_update_time2() {
    if (remaining_time2 > 0) {
        remaining_time2--;
        updatebuffer2(remaining_time2);
    }
}

void task_display_7seg1() {

    display7SEG(led_buffer_1[index_led_1]);
    enable_seg_0_1(index_led_1);
    index_led_1 = (index_led_1 + 1) % 2;
}

void task_display_7seg2() {

    display7SEG_2(led_buffer_2[index_led_2]);
    enable_seg_2_3(index_led_2);
    index_led_2 = (index_led_2 + 1) % 2;
}


void task_fsm1() {
	  SCH_Add_Task(task_update_time1, 0, 1000);
	  SCH_Add_Task(task_display_7seg1, 1000, 400);
    switch (LED_STATE1) {
        case INIT_STATE:
            setup1();
            remaining_time1 = RED_DURATION;
            LED_STATE1 = AUTO_RED;
            break;
        case AUTO_RED:
            red_led1();
            if (remaining_time1 == 0) {
                remaining_time1 = GREEN_DURATION;
                LED_STATE1 = AUTO_GREEN;
            }
            break;
        case AUTO_GREEN:
            green_led1();
            if (remaining_time1 == 0) {
                remaining_time1 = YELLOW_DURATION;
                LED_STATE1 = AUTO_YELLOW;
            }
            break;
        case AUTO_YELLOW:
            yellow_led1();
            if (remaining_time1 == 0) {
                remaining_time1 = RED_DURATION;
                LED_STATE1 = AUTO_RED;
            }
            break;
    }

}

void task_fsm2() {
	  SCH_Add_Task(task_update_time2, 0, 1000);
	  SCH_Add_Task(task_display_7seg2, 1000, 400);
    switch (LED_STATE2) {
        case INIT_STATE:
            setup2();
            remaining_time2 = GREEN_DURATION;
            LED_STATE2 = AUTO_GREEN;
            break;
        case AUTO_RED:
            red_led2();
            if (remaining_time2 == 0) {
                remaining_time2 = GREEN_DURATION;
                LED_STATE2 = AUTO_GREEN;
            }
            break;
        case AUTO_GREEN:
            green_led2();
            if (remaining_time2 == 0) {
                remaining_time2 = YELLOW_DURATION;
                LED_STATE2 = AUTO_YELLOW;
            }
            break;
        case AUTO_YELLOW:
            yellow_led2();
            if (remaining_time2 == 0) {
                remaining_time2 = RED_DURATION;
                LED_STATE2 = AUTO_RED;
            }
            break;
    }

}


