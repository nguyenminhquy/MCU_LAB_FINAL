#include "uart.h"

extern ADC_HandleTypeDef hadc1;

extern UART_HandleTypeDef huart2;

int status1 = INIT_UART;
int ADC_value = 0;

uint8_t buffer_byte;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;
uint8_t head = 0;
uint8_t tail = 0;

uint8_t cmd_flag = INIT ;
uint8_t cmd_data[MAX_CMD_SIZE];
uint8_t cmd_index= 0 ;
uint8_t msg[] = "cmd_data_index ok";



void cmd_parser_fsm() {
	switch (status1) {
	case INIT_UART:
		if (buffer_byte == '!')
		{
			cmd_index= 0 ;
			status1 = READING_UART ;
		}
		else
		{
			status1= INIT_UART;
			cmd_index= 0 ;
		}
		break;
	case READING_UART :


		if (buffer_byte != '!' && buffer_byte != '#')
		{

			cmd_data[cmd_index] = buffer_byte;
			if(cmd_index> MAX_CMD_SIZE)
			{
				status1 = INIT_UART ;
			    cmd_index = 0 ;

			}
			cmd_index++;
		}
		if (buffer_byte == '#') {
			status1 = STOP_UART;
			cmd_index = 0;
		}

		break;
	case STOP_UART:
		if(cmd_data[0]=='R' && cmd_data[1]=='S' && cmd_data[2]== 'T')
		{
			cmd_flag = RST;
		    setTimer1(10);
		}
		else if(cmd_data[0]=='O' && cmd_data[1]=='K')
		{
			cmd_flag = OK ;

		}
		status1 = INIT_UART;
		break;
	default:
		status1 = INIT_UART ;
		cmd_index = 0 ;
		break;
	}
}

void uart_comms_fsm() {
	char str[50];

	switch (cmd_flag) {
	case INIT:

		if(timer2_flag ==1)
		{


				  setTimer2(50);

		}
	case RST:
		if (timer1_flag == 1) {

			ADC_value = HAL_ADC_GetValue(&hadc1);
			HAL_UART_Transmit(&huart2, (void*) str,
					sprintf(str, "!ADC=%d#\r\n", ADC_value), 500);
			setTimer1(300);
		}


		break;
	case OK:
		ADC_value = -1;
		cmd_flag = INIT;


		break;
	default:
		break;
	}
}
