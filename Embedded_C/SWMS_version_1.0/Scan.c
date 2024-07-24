/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: Scan.c

*/

#include "STM32F401RBT6.h"
#include "LCD.h"

volatile int POT_VALUE;
int lm35_value, temp;
void init_config(void)
{
RCC_AHB1ENR |=(0X1<<1);//enable port b clock
RCC_AHB1ENR  |=(0X01<<2);   //enable port c clock

GPIO_PORTB_MODE &=(0xfffcf000);//clear 0,1,2,3,4,5 and 8 bit
GPIO_PORTB_MODE |=(0x00010555);//load '01' into the 0,1,2,3,4,5 add 8 bit

GPIO_PORTC_MODE &=(0xfffffff3); //clear 2-3 bit fields in mode register for PC1
GPIO_PORTC_MODE|=(0X0000000F);  //LOAD "11" in 2-3 bit fields to make analog mode
RCC_ABP2ENR|=(0X01<<8);   //SET 8th bit for ADCCLK

ADC_CR1 |=(0X01<<5);  //ENABLE EOC  BIT ADC_CR1 REG.TO ENABLE OF CONVERSION
ADC_CR1 |=(0X01<<8);  //SET 10TH FOR (EOCIE)

ADC_CR2 |=(0X01<<10);  //SET 10TH IN EOCIE BIT IN ADC_CR2 REGISTER TO SELECT THE END OF R3 CONVERSION
ADC_CR2 |=(0X01<<0);   //SET 0TH BIT ADC_CR2

ADC_SQR1 |=(0X01<<20); //LOAD "0010" IN 23-20 BITS FIELD IN ADC_SQR1
ADC_SQR3 |=(10<<0) | (11<<5); //CHANNEL ENABLE


NVIC_ISER0 |=(0X01<<18); //ENABLE 18TH BIT NVIC_ISERO TO ENABLE ADC INTERRUPT IN NVIC


}
void operation()
{
while(1)
{
ADC_CR2|=(0X01<<30);//set 30th bit SW_START(software start) for conversion
}
}


