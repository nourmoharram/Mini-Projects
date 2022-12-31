#include"COMMON/STD_Types.h"
#include"COMMON/Bit_wise.h"
#include"MCAL/DIO/DIO_Header/DIO_Interface.h"
#include"MCAL/PORT/PORT_Header/PORT_Interface.h"
/*Author : Nour moharram
 * Project name:interfacing two micro - controllers using UART communication protocol*/

#include"MCAL/UART/UART_Header/UART_Interface.h"
#include"MCAL/UART/UART_Header/UART_Register.h"
#include"HAL/LCD/CLCD_Interface.h"

/*Micro controller 2*/
int main(void)
{
	char received_data;
	USART_voidPinInit();
	CLCD_voidInit();
	USART_voidInit();
	CLCD_voidGoToXY(0,0);

	while(1)
	{
		received_data = USART_u8Receive();
		if(received_data != '\0')
		{
			CLCD_voidSendData(received_data);
		}
		else
		{

		}
	}


}

