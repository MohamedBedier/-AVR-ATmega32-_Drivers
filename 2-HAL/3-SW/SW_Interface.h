/*************************************************************/
/*************************************************************/
/**                                                         **/
/**  LayerArchitecture : APP                                **/
/** File Name : SW_interface.h                              **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

#ifndef SW_INTERFACE_H_
#define SW_INTERFACE_H_



/* SW ConnectionType options : 1-SOURCE_CONNECTION
 								2-SINK_CONNECTION
 				                    				  */
#define SW_u8PULL_UP			0u
#define SW_u8PULL_DOWN			1u


/* SW PORT options : 1-DIO_u8PORTA
 					  2-DIO_u8PORTB
 					  3-DIO_u8PORTC
 					  4-DIO_u8PORTD
 				                    				  */

/* SW PIN options : 1-DIO_u8PIN0
 					 2-DIO_u8PIN1
 					 3-DIO_u8PIN2
 					 4-DIO_u8PIN3
 					 5-DIO_u8PIN4
 					 6-DIO_u8PIN5
 					 7-DIO_u8PIN6
 					 8-DIO_u8PIN7
 				                    				  */

/**
 * @brief: this is the configuration struct for switch
 */

typedef struct
{
	uint8 SW_u8ConnectionType;
	uint8 SW_u8PORT;
	uint8 SW_u8PIN;
	uint8* pu8_StateVal;
}SW_Config_t;

/**
 * @brief: This function is used to Get switch state
 * @param ps_SW_Config : this is a pointer of struct which carrying SW configuration
 * @return: Local_u8ErrorState : this variable to carry error state value
 */

uint8  SW_u8GetSWState(SW_Config_t *ps_SW_Config);




#endif /* SW_INTERFACE_H_ */
