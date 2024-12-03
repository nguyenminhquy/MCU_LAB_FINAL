/*
 * ex10.c
 *
 *  Created on: Dec 1, 2024
 *      Author: quyng
 */


#include "ex10.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"

void ex10()
{

	int hour = 0;
	int minute = 0;
	int second = 0;

	while (1)
	{
		clearAllClock();
		setNumberOnClock(hour);
		setNumberOnClock(minute / 5);
		setNumberOnClock(second / 5);

		++second;
		if (second >= 60)
		{
			++minute;
			second = 0;
		}
		if (minute >= 60)
		{
			++hour;
			minute = 0;
		}
		if (hour >= 12)
		{
			hour = 0;
		}

		HAL_Delay(200);
	}
}
