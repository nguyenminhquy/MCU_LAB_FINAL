#include "scheduler.h"
#include "global.h"

sTask tasks_array[SCH_MAX_TASKS];



// khoi tao ban day cho task
void SCH_Init(void) {
    for (uint8_t i = 0; i < SCH_MAX_TASKS; i ++) {
        tasks_array[i].pTask = 0;
        tasks_array[i].ID = i  ;
        tasks_array[i].Delay = 0;
        tasks_array[i].Period = 0;
        tasks_array[i].RunMe = 0;
    }
}


void SCH_Update(void) {
    unsigned char Index;

    for (Index = 0; Index < SCH_MAX_TASKS; Index++) {
        if (tasks_array[Index].pTask != 0) {
            if (tasks_array[Index].Delay > 0) {
                tasks_array[Index].Delay -= 1;
            }
            if (tasks_array[Index].Delay == 0)
            {
                tasks_array[Index].RunMe += 1;
                if (tasks_array[Index].Period > 0)
                {
                    tasks_array[Index].Delay = tasks_array[Index].Period;
                }


            }
        }
    }
}
void SCH_Dispatch_Tasks() {
    unsigned char Index;
    for (Index = 0; Index < SCH_MAX_TASKS; Index++) {
        if (tasks_array[Index].RunMe > 0)
        {
            (*tasks_array[Index].pTask)();
            tasks_array[Index].RunMe -= 1;
              // xu ly one-shot
            if (tasks_array[Index].Period == 0) {
                tasks_array[Index].pTask = 0;
                tasks_array[Index].Delay = 0;
                tasks_array[Index].RunMe = 0;
            }

        }
    }
}


unsigned char SCH_Add_Task(void (*pFunction)(void), unsigned int DELAY, unsigned int PERIOD) {
    unsigned char Index = 0;
    while ((Index < SCH_MAX_TASKS) && (tasks_array[Index].pTask != 0)) {
        Index++;
    }


    if (Index == SCH_MAX_TASKS) {
        Error_code_G  =  ERROR_SCH_TOO_MANY_TASKS;
        return SCH_MAX_TASKS;
    }


    tasks_array[Index].pTask = pFunction;
    tasks_array[Index].Delay = DELAY;
    tasks_array[Index].Period = PERIOD/SCH_STICK;
    tasks_array[Index].RunMe = 0;


    return Index;
}



uint8_t SCH_Delete_TaskID(uint32_t taskID) {
    if (taskID >= SCH_MAX_TASKS || tasks_array[taskID].pTask == 0) {
        return 0;
    }

    tasks_array[taskID].pTask = 0;
    tasks_array[taskID].Delay = 0;
    tasks_array[taskID].Period = 0;
    tasks_array[taskID].RunMe = 0;

    return 1;
}
uint8_t SCH_Delete_Task(void (*pFunction)(void)) {
    for (uint32_t i = 0; i < SCH_MAX_TASKS; i++) {
        if (tasks_array[i].pTask == pFunction) {
            return SCH_Delete_TaskID(i);
        }
    }
    return 0;
}



void SCH_Clear_All(void) {
    for (uint32_t i = 0; i < SCH_MAX_TASKS; i++) {
        tasks_array[i].pTask = 0;   // Xóa con trỏ task
        tasks_array[i].Delay = 0;  // Đặt lại thời gian delay
        tasks_array[i].Period = 0; // Đặt lại chu kỳ
        tasks_array[i].RunMe = 0;  // Đặt lại trạng thái sẵn sàng thực thi
    }
}





