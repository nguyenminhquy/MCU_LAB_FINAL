/*
 * fsm_manual.c
 *
 *  Created on: Nov 18, 2024
 *      Author: quyng
 */



#include "fsm_automatic_sch.h"
#include "fsm_automatic.h"
#include "main.h"
#include "global.h"
#include "led.h"
#include "button.h"
#include "7seg.h"
#include "scheduler.h"






void change_mode_sch(int mode )
{


	MODE = mode;

}


void display_buffer1()
{


	  	display7SEG(led_buffer_1[index_led_1]);
	  	enable_seg_0_1(index_led_1);
	      index_led_1++;
	  	if (index_led_1 > 1)
	      {
	      index_led_1 = 0;
	      }

}
void display_buffer2()
{

	    	display7SEG_2(led_buffer_2[index_led_2]);
	    	enable_seg_2_3(index_led_2);
	        index_led_2++;
	    	if (index_led_2 > 1)
	        {
	        index_led_2 = 0;
	        }


}

void displayDuration_sch(int mode, int duration) {
    led_buffer_1[0] = 0;            // LED 0 hiển thị chế độ (mode)
    led_buffer_1[1] = mode ;
    led_buffer_2[1] = duration % 10;   // LED 2 hiển thị hàng đơn vị của duration
    led_buffer_2[0] = duration / 10;   // LED 3 hiển thị hàng chục của duration
   SCH_Add_Task(display_buffer1, 0, 300);
   SCH_Add_Task(display_buffer2, 0, 300);


}


void fsm_manual_run_sch()
{
	switch(MODE)
	{
	    case INIT_MODE:
	    	 init1();
	    	 init2();
	    	 led_buffer_1[0] = 0;
	    	 led_buffer_1[1] = 0;
	    	 led_buffer_2[1] = 0;
	    	 led_buffer_2[0] = 0;
	    	     SCH_Add_Task(display_buffer1, 0, 300);
	    	     SCH_Add_Task(display_buffer2, 0, 300);
	    		 SCH_Add_Task(get3ButtonInput, 0, 10);
	    	    if (isButtonPressed(0) == 1){
	    	    	tempDuration = RED_DURATION;
	    	    	change_mode_sch(MODE_1);


	    	    }


	    	    break;

	    case MODE_1:
	    	// xoa nhung task o mode truoc
    	    SCH_Delete_Task(display_buffer1);
    	    SCH_Delete_Task(display_buffer2);
    	    SCH_Delete_Task(get3ButtonInput);
    	    // them cac task
    	    SCH_Add_Task(get3ButtonInput, 0, 10);
    	    SCH_Add_Task(display_buffer1, 0, 300);
    	    SCH_Add_Task(display_buffer2, 0, 300);




	    	task_update_time1();
	    	task_display_7seg1();
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


	    	    task_update_time2();
	    	    task_display_7seg2();
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



	    	 if (isButtonPressed(0) == 1){
	    		    		 tempDuration = RED_DURATION;
	    		    		  MODE= MODE_2;
	    		    	 }
	    	 break ;


	    case MODE_2:// red
    	    SCH_Delete_Task(get3ButtonInput);
    	    SCH_Delete_Task(display_buffer1);
    	    SCH_Delete_Task(display_buffer2);
    	      // them cac task cho mode
    	    SCH_Add_Task(get3ButtonInput, 0, 10);
	    	displayDuration_sch(2, tempDuration);
            toggle_red();


	    	if(isButtonPressed(0)==1)
	    	{
	    		tempDuration = YELLOW_DURATION;
	    		change_mode_sch(MODE_3);
	    	}



			if (isButtonPressed(1) == 1){


				tempDuration++;


			}
			if (isButtonPressed(2) == 1){
				change_mode_sch(RED_CONFIRM);
			}
	    	break ;

	    case MODE_3://yellow
    	    SCH_Delete_Task(display_buffer1);
    	    SCH_Delete_Task(display_buffer2);
    	    SCH_Delete_Task(get3ButtonInput);
             //
    	    SCH_Add_Task(get3ButtonInput, 0, 10);

	    	displayDuration_sch(3, tempDuration);
	    	SCH_Add_Task(get3ButtonInput, 0, 10);

	    	if(isButtonPressed(0)==1)
	    	{
	    		tempDuration = GREEN_DURATION;
	    		change_mode_sch(MODE_4);
	    	}


			if (isButtonPressed(1) == 1){
				tempDuration++ ;


			}
			if (isButtonPressed(2) == 1){
				change_mode_sch(YELLOW_CONFIRM);
			}
			toggle_yellow();
	    	break ;
	    case MODE_4://green
	    	SCH_Delete_Task(get3ButtonInput);
	    	SCH_Delete_Task(display_buffer1);
	    	SCH_Delete_Task(display_buffer2);
	    	toggle_green();
	    	SCH_Add_Task(get3ButtonInput, 0, 10);
	    	displayDuration_sch(4, tempDuration);
	    	SCH_Add_Task(get3ButtonInput, 0, 10);
	    	if(isButtonPressed(0)==1)
	    	{
	    		tempDuration = RED_DURATION;
	    		change_mode_sch(INIT_MODE);
	    	}


			if (isButtonPressed(1) == 1){
				tempDuration++;


			}
			if (isButtonPressed(2) == 1){
				change_mode_sch(GREEN_CONFIRM);
			}


	    	break ;



	    case RED_CONFIRM:
	    	RED_DURATION = tempDuration;
	    	change_mode_sch(MODE_2);
	    	break ;
	    case RED_CONFIG:
	    	tempDuration++;
	    	tempDuration %= 100;
	    	change_mode_sch(MODE_2);
	    	break;
	    case YELLOW_CONFIG:
	    	tempDuration++;
	        tempDuration %= 100;
	    	change_mode_sch(MODE_3);
	        break;
	    case YELLOW_CONFIRM:
			YELLOW_DURATION = tempDuration;
			change_mode_sch(MODE_3);
			break ;
	    case GREEN_CONFIRM:
	    	GREEN_DURATION = tempDuration;
	    	change_mode_sch(MODE_4);
	    	break;
	    case GREEN_CONFIG:
	    	tempDuration++;
	        tempDuration %= 100;
	    	change_mode_sch(MODE_4);
	        break;
		default:
			 break;


	}


}

