/**
 ******************************************************************************
 * @file    main.c
 * @author  Adapted from @pirohaz
 * @version v1.1
 * @date    24-December-2018
 * @brief   Playing with LEDs using ST functions
 ******************************************************************************
*/

// Include libraries
#include <stm32f0_discovery.h>

// LED definitions
#define GreenLED 0
#define BlueLED 1

int main(void)
{
	STM_EVAL_LEDInit(GreenLED); 					// Init Green LED
	STM_EVAL_LEDInit(BlueLED); 						// Init Blue LED
	STM_EVAL_PBInit(BUTTON_USER, BUTTON_MODE_GPIO); // Init Push button
	uint8_t ButtonRead = 0;                   		// Initialize ButtonRead variable

	while(1) // Infinite loop!
	{
		// Read button input
		ButtonRead = STM_EVAL_PBGetState(BUTTON_USER);
		if(ButtonRead){
			// If button is pressed, turn green LED off and blue on
			STM_EVAL_LEDOff(GreenLED);
			STM_EVAL_LEDOn(BlueLED);
		}
		else{
			// If button isn't pressed, turn green LED on and blue off
			STM_EVAL_LEDOff(BlueLED);
			STM_EVAL_LEDOn(GreenLED);
		}
	}
}
