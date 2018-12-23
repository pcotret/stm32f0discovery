/**
 ******************************************************************************
 * @file    main.c
 * @author  pcotret <pascal.cotret@gmail.com>
 * @version v1.0
 * @date    23-December-2018
 * @brief   Set an LED on with ST utilities.
 ******************************************************************************
*/

#include <stm32f0_discovery.h>

int main(void)
{
	// Initialize the green LED LED3
	STM_EVAL_LEDInit(LED3_PIN);
	// Toggle ON LED3
	STM_EVAL_LEDOn(LED3_PIN);
	
	return 0;
}
