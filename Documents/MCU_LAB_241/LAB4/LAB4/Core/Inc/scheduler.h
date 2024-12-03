/*
 * scheduler.h
 *
 *  Created on: Nov 19, 2024
 *      Author: quyng
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>
#define RETURN_ERROR  0  // Function returned with an error
#define RETURN_NORMAL 1  // Function returned successfully
#define ERROR_SCH_TOO_MANY_TASKS 21
#define ERROR_SCH_WAITING_FOR_SLAVE_TO_ACK 22
#define ERROR_SCH_WAITING_FOR_START_COMMAND_FROM_MASTER 23
#define ERROR_SCH_ONE_OR_MORE_SLAVES_DID_NOT_START 24
#define ERROR_SCH_LOST_SLAVE 25
#define ERROR_SCH_CAN_BUS_ERROR 26
#define ERROR_I2C_WRITE_BYTE_AT24C64 27
#define ERROR_SCH_CANNOT_DELETE_TASK 28

typedef struct {
    void (*pTask)(void);    // Pointer to the task function
    uint32_t Delay;         // Ticks until the task is ready to run
    uint32_t Period;        // Period between task runs (0 = one-shot task)
    uint8_t RunMe;          // Flag indicating the task is ready to run
    uint32_t ID ;
} sTask;
void SCH_Update(void);
void SCH_Init(void);
unsigned char SCH_Add_Task(void (*pFunction)(void), unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks();
uint8_t SCH_Delete_TaskID(uint32_t taskID);
uint8_t SCH_Delete_Task(void (*pFunction)(void));
void SCH_Clear_All(void);


#define SCH_MAX_TASKS 20
#define SCH_STICK 10







#endif /* INC_SCHEDULER_H_ */
