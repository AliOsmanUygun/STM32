/*
 * it.c
 *
 *  Created on: Oct 3, 2024
 *      Author: ali33
 */


#include "main_app.h"

void Systick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();

}
