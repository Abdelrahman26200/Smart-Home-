/*****************************************/
/*****************************************/
/****** By  : Abdelrahman Mohamed ********/
/****** Date:     23/2/2022       ********/
/****** SWC :        ADC          ********/
/****** VER :        1.00         ********/
/*****************************************/
/*****************************************/

#ifndef ADC_REGISTER_H
#define ADC_REGISTER_H


void ADC_voidInt(void);

u8 ADC_u8StartConversionSynch(u8 Copy_u8Channel , u8* Copy_pu8Reading ,void(*Copy_pvNotificationFunc)(void));

u8 ADC_u8StartConversionASynch(u8 Copy_u8Channel,u8 *Copy_pu8Reading,void(*Copy_pvNotificationFunc)(void));

#endif
