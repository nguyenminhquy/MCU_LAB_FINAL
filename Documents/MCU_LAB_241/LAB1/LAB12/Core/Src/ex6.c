/*
 * ex6.c
 *
 *  Created on: Dec 1, 2024
 *      Author: quyng
 */

#include "ex6.h"

 void ex6()
 {
	 HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);  // Toggle LED1
	 HAL_Delay(1000);  // Chờ 1000ms (1 giây)

	 // Toggle LED2 trong 1 giây
	 HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);  // Toggle LED2
	 HAL_Delay(1000);  // Chờ 1000ms

	 // Toggle LED3 trong 1 giây
	 HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);  // Toggle LED3
	 HAL_Delay(1000);  // Chờ 1000ms

	 // Tiếp tục cho các LED còn lại...
	 HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);  // Toggle LED4
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);  // Toggle LED5
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED6_GPIO_Port, LED6_Pin);  // Toggle LED6
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED7_GPIO_Port, LED7_Pin);  // Toggle LED7
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED8_GPIO_Port, LED8_Pin);  // Toggle LED8
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED9_GPIO_Port, LED9_Pin);  // Toggle LED9
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED10_GPIO_Port, LED10_Pin);  // Toggle LED10
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED11_GPIO_Port, LED11_Pin);  // Toggle LED11
	 HAL_Delay(1000);

	 HAL_GPIO_TogglePin(LED12_GPIO_Port, LED12_Pin);  // Toggle LED12
	 HAL_Delay(1000);

 }
