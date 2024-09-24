#include <stdint.h>



int main(void)
{
    uint32_t *pClkCtrlReg = (uint32_t*)0x40023830;
    uint32_t *pPortDModeReg = (uint32_t*)0x40020C00;
    uint32_t *pPortDOutReg = (uint32_t*)0x40020C14;

    // enable the clock for GPIOD peripheral in the AHB1ENR
    *pClkCtrlReg |= ( 1<<3);
    *pPortDModeReg &= ~(3<<24);
    *pPortDModeReg |= (1 <<24);
    *pPortDOutReg |= (1<<12);

    while(1)
    {

    }



}
