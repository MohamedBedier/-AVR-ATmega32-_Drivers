# **********  SSD Driver  **********   
This is a driver designed to configure LED.It consists of 3 functions:

1- **SSD_u8Display_ON:**
	this is a function to Configure SSD on and it takes one parameter:
	- 'ps_SSD_Config' : this is a pointer of struct which carrying SSD configuration.
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.

2- **SSD_u8Display_OFF:** 
	this is a function to Configure LED off and it takes one parameter:
	- 'ps_SSD_Config' : this is a pointer of struct which carrying SSD configuration.
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
3- **SSD_u8SetNumber:** 
	this is a function to Configure LED off and it takes one parameter:
	- 'ps_SSD_Config' : this is a pointer of struct which carrying SSD configuration.
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
 **this is the configuration struct for LED:**

typedef struct
{
	uint8 SSD_u8TYPE ;
	uint8 SSD_u8DATA_PORT;
	uint8 SSD_u8ENABLE_PORT ;
	uint8 SSD_u8ENABLE_PIN ;

}SSD_Config_t;

