/*
 * ex1.c
 *
 *  Created on: Dec 1, 2024
 *      Author: quyng
 */


#include "ex1.h"

int status = 0 ; // 0 red 1 yellow
int time = 2 ;
void ex1()
{

	  switch (status)
	    {
	    case 0:
	      HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	      HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	      break;
	    case 1:
	      HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	      HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	      break;
	    default:
	      break;
	    }

	    time--;
	    if (time == 0)
	    {
	      time = 2;
	      status = !status;
	    }
	    HAL_Delay(1000);

}
