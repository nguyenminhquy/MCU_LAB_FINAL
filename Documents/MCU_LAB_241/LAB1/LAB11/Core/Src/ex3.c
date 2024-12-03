/*
 * ex3.c
 *
 *  Created on: Dec 1, 2024
 *      Author: quyng
 */


#include "ex3.h"
int red_time3 = 5 ;
int green_time3 = 2;
int yellow_time3 =3 ;

void ex3()
{
	int status1 = 0 ;
	int status2 = 0 ;
	int time1  = red_time3 ;
	int time2 = green_time3 ;
		while (1)
		{
			switch (status1) {
				case 0 :
					HAL_GPIO_WritePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin, RESET);
					HAL_GPIO_WritePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin, SET);
					HAL_GPIO_WritePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin, SET);

					--time1;
					if (time1 == 0)
					{
						status1 = 1;
						time1 = green_time3;
					}
					break;
				case 1:
					HAL_GPIO_WritePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin, SET);
					HAL_GPIO_WritePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin, SET);
					HAL_GPIO_WritePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin, RESET);

					--time1;
					if (time1== 0)
					{
						status1 = 2;
						time1 = yellow_time3 ;
					}
					break;
				case 2:
					HAL_GPIO_WritePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin, SET);
					HAL_GPIO_WritePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin, RESET);
					HAL_GPIO_WritePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin, SET);

					--time1;
					if (time1== 0)
					{
						status1 = 0;
						time1 = red_time3 ;
					}
					break;
				default:
					break;
			}


          while(1)
          {
        		switch (status2)
        				{
        				case 0 :
        									HAL_GPIO_WritePin(LED_RED_WAY2_GPIO_Port, LED_RED_WAY2_Pin, RESET);
        									HAL_GPIO_WritePin(LED_YELLOW_WAY2_GPIO_Port, LED_YELLOW_WAY2_Pin, SET);
        									HAL_GPIO_WritePin(LED_GREEN_WAY2_GPIO_Port, LED_GREEN_WAY2_Pin, SET);

        									--time2;
        									if (time2 == 0)
        									{
        										status2 = 1;
        										time2 = green_time3;
        									}
        									break;
        								case 1:
        									HAL_GPIO_WritePin(LED_RED_WAY2_GPIO_Port, LED_RED_WAY2_Pin, SET);
        									HAL_GPIO_WritePin(LED_YELLOW_WAY2_GPIO_Port, LED_YELLOW_WAY2_Pin, SET);
        									HAL_GPIO_WritePin(LED_GREEN_WAY2_GPIO_Port, LED_GREEN_WAY2_Pin, RESET);

        									--time2;
        									if (time2== 0)
        									{
        										status2 = 2;
        										time2 = yellow_time3 ;
        									}
        									break;
        								case 2:
        									HAL_GPIO_WritePin(LED_RED_WAY2_GPIO_Port, LED_RED_WAY2_Pin, SET);
        									HAL_GPIO_WritePin(LED_YELLOW_WAY2_GPIO_Port, LED_YELLOW_WAY2_Pin, RESET);
        									HAL_GPIO_WritePin(LED_GREEN_WAY2_GPIO_Port, LED_GREEN_WAY2_Pin, SET);

        									--time2 ;
        									if (time2== 0)
        									{
        										status2 = 0;
        										time2 = red_time3 ;
        									}
        									break;
        								default:
        									break;
          }

			HAL_Delay(1000);
		}
}
}
