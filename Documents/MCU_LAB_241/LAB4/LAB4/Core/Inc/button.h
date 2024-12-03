/*
 * button.h
 *
 *  Created on: Nov 17, 2024
 *      Author: quyng
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButtonPressed(int button);
void subKeyProcess(int button);
void getKeyInput(int button);
void get3ButtonInput();

#endif /* INC_BUTTON_H_ */
