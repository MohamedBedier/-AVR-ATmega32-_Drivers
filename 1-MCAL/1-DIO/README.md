# DIO Driver 
This is a driver designed to configure ATmega32 DIO pins.It consists of 7 functions:

1- **DIO_u8SetPinDirection:**
 this is a function to determine pin direction [input or output] and it takes these parameters:
	- 'Copy_u8Port' : this is a macro to determine which port you work on it.
	- 'Copy_u8Pin' :  this is a macro to determine which pin you work on it.
	- 'Copy_u8Direction' : this is a macro to determine pin direction [input or output]. 
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.

2- **DIO_u8SetPinValue:** this is a function to determine pin value [high or low] and it takes these parameters:
	- 'Copy_u8Port' : this is a macro to determine which port you work on it.
	- 'Copy_u8Pin' :  this is a macro to determine which pin you work on it.
	- 'Copy_u8Value' : this is a macro to determine pin value [high or low].
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
3- **DIO_u8GetPinValue:** this is a function to  get pin value [high or low] and it takes these parameters:
	- 'Copy_u8Port' : this is a macro to determine which port you work on it.
	- 'Copy_u8Pin' :  this is a macro to determine which pin you work on it.
	- 'Copy_pu8Value' : this is a pointer to carry pin state value.
 - **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
4- **DIO_u8TogglePin:** this is a function to toggle pin (convert it from high to low or from low to high) and it takes these parameters:
	- 'Copy_u8Port' : this is a macro to determine which port you work on it.
	- 'Copy_u8Pin' :  this is a macro to determine which pin you work on it.
 - **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
5- **DIO_u8SetPortDirection:** this is a function to determine port direction [input or output] and it takes these parameters:
	- 'Copy_u8Port' : this is a macro to determine which port you work on it.
	- 'Copy_u8Direction' : this is a macro to determine port value [input or output].
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
6- **DIO_u8SetPortValue:** this is a function to determine port value [high or low] and it takes these parameters:
	- 'Copy_u8Port' : this is a macro to determine which port you work on it.
	- 'Copy_u8Direction' : this is a macro to determine port value [high or low] .
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.
 
7- **DIO_u8GetPortValue:** this is a function to determine port direction [input or output] and it takes these parameters:
	- 'Copy_u8Port' : this is a macro to determine which port you work on it.
	- 'Copy_pu8Value' : this is a pointer to carry pin state value.
	- **Returns:**  'Local_u8ErrorState'  indicating any errors during execution.