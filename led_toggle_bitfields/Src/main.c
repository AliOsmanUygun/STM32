

#include "main.h"
	/*
	uint32_t *pClkCtrlReg = (uint32_t*)0x40023830;
    uint32_t *pPortDModeReg = (uint32_t*)0x40020C00;
    uint32_t *pPortDOutReg = (uint32_t*)0x40020C14;*/

int main(void)
{
    RCC_AHB1ENR_t volatile *const pClkCtrlReg = (RCC_AHB1ENR_t*) 0x40023830;
    GPIOx_MODE_t volatile *const pPortModeReg = (GPIOx_MODE_t*) 0x40020C00;
    GPIOx_ODR_t volatile *const pPortDOutReg = (GPIOx_ODR_t*)  0x40020C14;
    pClkCtrlReg ->gpio_den = 1;

    pPortModeReg ->pin_12 =1;

	while(1)
	{
		pPortDOutReg ->pin_12 =1;

		for(uint32_t i=0; i<300000; i++);

		pPortDOutReg ->pin_12 =0;
		for(uint32_t i=0 ; i<300000; i++);
	}
}
