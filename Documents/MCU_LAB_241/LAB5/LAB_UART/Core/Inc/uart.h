#include "main.h"
#include "software_timer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT_UART    0

#define READING_UART 1

#define STOP_UART    2
#define INIT 7
#define RST 8

#define OK 9

#define MAX_CMD_SIZE 3

#define MAX_BUFFER_SIZE 40
extern uint8_t head ;
extern uint8_t tail ;
extern uint8_t buffer_byte;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern uint8_t cmd_data_index ;

void cmd_parser_fsm();

void uart_comms_fsm();
