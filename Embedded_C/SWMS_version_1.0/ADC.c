/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: ADC.c

*/

#include "STM32F401RBT6.h"
#include "ADC.h"

int LM35,Temp;
int flag=0;


void KM_ADC_MUX_init(void)
{
RCC_AHB1ENR |=(0x1<<2);  // Enable Port C clock
GPIO_PORTC_MODE &= 0xFFFFFFFC; // clear 0,1 bits PC0(chanall no 10) (LM35)
  GPIO_PORTC_MODE |= 0x00000003; // load "11" into bit 3-2  PC0(LM35) connecting
}

void km_ADC_init(void)
{
RCC_APB2ENR |=(0x1<<8); // Enable ADC clock
//ADC_SQR3 &= 0xFFFFFFF0; // clear 4 -0 bits channel no 11 bits
//ADC_SQR3 |= 0x0000000B;//load "1011" (channel no-11) into 4-0 bits
  ADC_SQR3 &= 0xFFFFFFE0; // clear 4 -0 bits channel no 10 bits
ADC_SQR3 |= 0x0000000A;//load "1010" (channel no-10) into 4-0 bits
ADC_CR1 |=(0x1<<5);   //1: EOC interrupt enabled. An interrupt is generated when the EOC bit is set.
ADC_CR1 |=(0x1<<8);   //set 8th bit 1: Scan mode enabled
ADC_CR2 |=(0x1<<10); // set 10th bit  (EOCS) select end of conversion
  ADC_CR2 |=(0x1<<0);//set 0th Enable ADC
  NVIC_ISER0 |=(0x1<<18); //ADC interruput Enable
}
  //ADC_CR2 |=(0x1<<30); //Start conversion of regular channels

void ADC_IRQHandler(void)
{
if(ADC_SR & (0X1<<1))
{
LM35=ADC_DR;
Temp=(((LM35*3100)/10)/(4096));
flag++;

ADC_SR &=(~(0X01<<1)); //CLEAR 10TH BIT FOR (EOCS) IN ADC_CR2
}
}
