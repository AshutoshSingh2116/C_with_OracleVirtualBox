/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: SysTickTimer.c

*/

#include "STM32F401RBT6.h"
#include "UART6.h"

// Hardware Generic Delay using Polling method (millisec)
void KM_delay(int n)
{
STK_LOAD =16000;//loading 16000to stk_load for 1msec delay
STK_LOAD=16000*n;//"n"of delay
STK_CTRL |=0x1<<0;//count enable


while(!(STK_CTRL & (0x1<<16)))//check 16th bit count flag
{
;
}
STK_VAL=0x123;//load any value to clear count flag
}
void systick_init()
{
STK_CTRL |=(0X01<<2);// CLOCK
STK_CTRL &=~(0X01<<1);//CHOOSE POLLING METHOD
}
