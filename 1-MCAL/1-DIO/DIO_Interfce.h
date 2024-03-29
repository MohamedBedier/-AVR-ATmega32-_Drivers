/*************************************************************/
/*************************************************************/
/**                                                         **/
/** LayerArchitecture : MCAL                                **/
/** File Name : DIO_Interface.h                             **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

#ifndef   DIO_INTERFACE_H_
#define   DIO_INTERFACE_H_

/*******************************************/
/*******************************************/
/*******        define macros        *******/
/*******************************************/
/*******************************************/
#define  DIO_u8PORTA  0u   /*type casting for unsigned */
#define  DIO_u8PORTB  1u
#define  DIO_u8PORTC  2u
#define  DIO_u8PORTD  3u

#define  DIO_u8DDRA   0u   /*type casting for unsigned */
#define  DIO_u8DDRB   1u
#define  DIO_u8DDRC   2u
#define  DIO_u8DDRD   3u

#define  DIO_u8PINA   0u   /*type casting for unsigned */
#define  DIO_u8PINB   1u
#define  DIO_u8PINC   2u
#define  DIO_u8PIND   3u

#define  DIO_u8PIN0   0u
#define  DIO_u8PIN1   1u
#define  DIO_u8PIN2   2u
#define  DIO_u8PIN3   3u
#define  DIO_u8PIN4   4u
#define  DIO_u8PIN5   5u
#define  DIO_u8PIN6   6u
#define  DIO_u8PIN7   7u

#define  DIO_u8PIN_INPUT   0u  /*type casting for unsigned */
#define  DIO_u8PIN_OUTPUT  1u

#define  DIO_u8PIN_LOW   0u  /*type casting for unsigned */
#define  DIO_u8PIN_HIGH  1u

#define  DIO_u8PORT_INPUT   0X00
#define  DIO_u8PORT_OUTPUT  0XFF

#define  DIO_u8PORT_LOW   0X00
#define  DIO_u8PORT_HIGH  0XFF

/**
 * @brief: this is a function to determine pin direction [input or output]
 * @param[in] Copy_u8Port: this is a macro to determine which port you work on it
 * @param[in] Copy_u8Pin:  this is a macro to determine which pin you work on it
 * @param[in] Copy_u8Direction: this is a macro to determine pin direction [input or output]
 * @return : Local_u8ErrorState : this variable to carry error state value
 */
uint8 DIO_u8SetPinDirection(uint8 Copy_u8Port ,uint8 Copy_u8Pin ,uint8 Copy_u8Direction);
/**
 * @brief: this is a function to determine pin value [high or low]
 * @param[in] Copy_u8Port: this is a macro to determine which port you work on it
 * @param[in] Copy_u8Pin:  this is a macro to determine which pin you work on it
 * @param[in] Copy_u8Value: this is a macro to determine pin value [high or low]
 * @return : Local_u8ErrorState : this variable to carry error state value
 */
uint8 DIO_u8SetPinValue(uint8 Copy_u8Port ,uint8 Copy_u8Pin ,uint8 Copy_u8Value);
/**
 * @brief: this is a function to get pin value [high or low]
 * @param[in] Copy_u8Port: this is a macro to determine which port you work on it
 * @param[in] Copy_u8Pin:  this is a macro to determine which pin you work on it
 * @param Copy_pu8Value: this is a pointer to carry pin state value
 * @return: Local_u8ErrorState : this variable to carry error state value
 */
uint8 DIO_u8GetPinValue(uint8 Copy_u8Port ,uint8 Copy_u8Pin ,uint8* Copy_pu8Value);
/**
 * @brief: this is a function to toggle pin (convert it from high to low or from low to high)
 * @param[in] Copy_u8Port: this is a macro to determine which port you work on it
 * @param[in] Copy_u8Pin:  this is a macro to determine which pin you work on it
 * @return: Local_u8ErrorState : this variable to carry error state value
 */
uint8 DIO_u8TogglePin(uint8 Copy_u8Port ,uint8 Copy_u8Pin );
/**
 * @brief: this is a function to determine port direction [input or output]
 * @param[in] Copy_u8Port: this is a macro to determine which port you work on it
 * @param[in] Copy_u8Direction: this is a macro to determine pin direction [input or output]
 * @return : Local_u8ErrorState : this variable to carry error state value
 */
uint8 DIO_u8SetPortDirection(uint8 Copy_u8Port ,uint8 Copy_u8Direction);
/**
 * @brief: this is a function to determine port value [high or low]
 * @param[in] Copy_u8Port: this is a macro to determine which port you work on it
 * @param[in] Copy_u8Value: this is a macro to determine port value [high or low]
 * @return : Local_u8ErrorState : this variable to carry error state value
 */
uint8 DIO_u8SetPortValue(uint8 Copy_u8Port  ,uint8 Copy_u8Value);
/**
 * @brief: this is a function to get port value [high or low]
 * @param[in] Copy_u8Port: this is a macro to determine which port you work on it
 * @param Copy_pu8Value: this is a pointer to carry port state value
 * @return: Local_u8ErrorState : this variable to carry error state value
 */
uint8 DIO_u8GetPortValue(uint8 Copy_u8Port  ,uint8* Copy_pu8Value);


#endif
