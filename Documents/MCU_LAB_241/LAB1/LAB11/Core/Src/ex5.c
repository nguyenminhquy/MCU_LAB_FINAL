/*
 * ex5.c
 *
 *  Created on: Dec 2, 2024
 *      Author: quyng
 */
#include "ex5.h"
int red_time5  = 5 ;
int green_time5 = 2 ;
int yellow_time5 = 3 ;

void display7SEG_1(int num)
	{
	    switch (num) {
	        case 0:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	            break;
	        case 1:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	            break;
	        case 2:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	            break;
	        case 3:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	            break;
	        case 4:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	            break;
	        case 5:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	            break;
	        case 6:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	            break;
	        case 7:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	            break;
	        case 8:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	            break;
	        case 9:
	            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	            HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	            break;
	        default:
	            break;
	    }
	}

void display7SEG_2(int num)
	{
	    switch (num) {
	        case 0:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	            break;
	        case 1:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	            break;
	        case 2:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	            break;
	        case 3:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	            break;
	        case 4:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	            break;
	        case 5:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	            break;
	        case 6:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	            break;
	        case 7:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	            break;
	        case 8:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	            break;
	        case 9:
	            HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	            HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	            HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	            HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	            HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	            HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	            HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	            break;
	        default:
	            break;
	    }
	}


void ex5()
{
	    int status1 = 0 ;
		int status2 = 0 ;
		int time1  = red_time5 ;
		int time2 = green_time5 ;
			while (1)
			{
				display7SEG_1(time1);
				switch (status1) {
					case 0 :
						HAL_GPIO_WritePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin, RESET);
						HAL_GPIO_WritePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin, SET);
						HAL_GPIO_WritePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin, SET);

						--time1;
						if (time1 == 0)
						{
							status1 = 1;
							time1 = green_time5;
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
							time1 = yellow_time5 ;
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
							time1 = red_time5 ;
						}
						break;
					default:
						break;
				}
				display7SEG_2(time2);
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
										time2 = green_time5 ;
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
										time2 = yellow_time5 ;
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
										time2 = red_time5 ;
									}
									break;
								default:
									break;
				}

				HAL_Delay(1000);
			}
}
