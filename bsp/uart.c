#include "uart.h"
extern UART_HandleTypeDef huart1;
char rxdata[20];
uint8_t rxdat;
unsigned char rx_pointer;


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == USART1)
		{
			rxdata[rx_pointer++]=rxdat;
			HAL_UART_Receive_IT(&huart1,&rxdat,1);
		}
	
	
}
