/***********************************************************/
/***********************************************************/
/**************** By  : Abdelrahman Mohamed ****************/
/**************** Date:     3/21/2022       ****************/
/**************** Layer:      HAL           ****************/
/**************** SWC :       LED           ****************/
/**************** VER :       1.00          ****************/
/***********************************************************/
/***********************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "LED_interface.h"


void LED_VidTurnON(LED_t *LED)
{
	if(LED->ConnType == LED_u8SOURCE)
	{
		DIO_vidSetPinValue(LED->LEDPORT,LED->LEDPIN,HIGH);
	}
	else if((LED->ConnType) == LED_u8SINK)
	{
		DIO_vidSetPinValue(LED->LEDPORT,LED->LEDPIN,LOW);
	}

}
void LED_VidTurnOFF(LED_t *LED)
{
	if(LED->ConnType == LED_u8SOURCE)
		{
			DIO_vidSetPinValue(LED->LEDPORT,LED->LEDPIN,LOW);
		}
		else if (LED->ConnType == LED_u8SINK)
		{
			DIO_vidSetPinValue(LED->LEDPORT,LED->LEDPIN,HIGH);
		}
}
