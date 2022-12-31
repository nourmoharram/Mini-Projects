#include"../COMMON/STD_Types.h"
#include"../MCAL/DIO/DIO_Header/DIO_Interface.h"
//#include"../MCAL/PORT/PORT_Header/PORT_Interface.h"
#include"../HAL/Keypad/Keypad_interface.h"
#include"../MCAL/UART/UART_Header/UART_Interface.h"

/*Micro controller 1*/

int main(void)
{
	char data_to_sent='\0';
	KEYPAD_Init();
	USART_voidPinInit();
	USART_voidInit();

	while(1)
	{
		data_to_sent= KPD_u8GetPressedKey();
		if(data_to_sent != '\0')
		{
			USART_voidSend(data_to_sent);
		}
		else
		{

		}

	}

}
