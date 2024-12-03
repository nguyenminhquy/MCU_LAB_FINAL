/*
 * ex2.c
 *
 *  Created on: Dec 1, 2024
 *      Author: quyng
 */


#include "ex2.h"

int red_time = 5 ;
int yellow_time = 3 ;
int green_time =2 ;


void ex2()
{
	    int status = 0 ; //0 red 1 yellow 2 green
		int counter = red_time;
		while (1)
		{
			switch (status) {
				case 0:
					HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
					HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
					HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);

					--counter;
					if (counter <= 0)
					{
						status = 1;
						counter = green_time;
					}
					break;
				case 1:
					HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
					HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
					HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);

					--counter;
					if (counter <= 0)
					{
						status = 2;
						counter = yellow_time ;
					}
					break;
				case 2:
					HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
					HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
					HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);


					--counter;
					if (counter <= 0)
					{
						status = 0;
						counter = red_time;
					}
					break;
				default:
					break;
			}

			HAL_Delay(1000);
		}
}
