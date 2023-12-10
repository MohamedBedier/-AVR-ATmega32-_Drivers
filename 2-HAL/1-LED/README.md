# **********  LED Driver  **********   
This is a driver designed to configure LED.It consists of 3 functions:

1- **LED_u8LedTurnON:**
	this is a function to Configure LED on and it takes one parameter:
	- 'puFrom_LED_Config' : this is a pointer of struct which carrying LED configuration.
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.

2- **LED_u8LedTurnOff:** 
	this is a function to Configure LED off and it takes one parameter:
	- 'puFrom_LED_Config' : this is a pointer of struct which carrying LED configuration.
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
3- **LED_u8LEDToggle:** 
	this is a function to Configure LED off and it takes one parameter:
	- 'puFrom_LED_Config' : this is a pointer of struct which carrying LED configuration.
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
 **this is the configuration struct for LED:**

typedef struct
{
	uint8 LED_u8ConnectionType;  /* LED ConnectionType */
	uint8 LED_u8PORT; /* LED PORT */
	uint8 LED_u8PIN;/* LED PIN */
}LED_Config_t;

