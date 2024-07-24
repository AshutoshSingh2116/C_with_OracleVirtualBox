/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: UART.c

*/


#include "STM32F401RBT6.h"
#include "UART6.h"
int i;
//INTAILIZATION
void UART6_Init(void)
{
RCC_AHB1ENR|=(0x1<<2);//Enable Port C Clock
GPIO_PORTC_MODE|=(0x0000A000);//Enable PC6 and PC7 as alternate functions (load ‘10’) in GPIO_PORTC_MODE REGISTER

GPIO_PORTA_AFRL|=(8<<24)|(8<<28);//load "1000" in 24-28bits AFRL_6 AND AFRL7
RCC_APB2ENR|=(0x1<<5);//Enable UART6 clock
}

//CONFIGRUATION
void UART6_Config(void)
{
USART6_BRR|=(0x87);//Set baud rate in BRR (0x87)
USART6_CR1|=(0x1<<13)|(0x1<<2)|(0x1<<3);//Set 13th, 2nd and 3rd bits in CR1 register to enable USART 2 enable
 }

 //Transmitt character
void UART6_OutChar(unsigned char data)
{
while(!(USART6_SR &(0x1<<7)));//Read USART2_SR register and check 7th bit (TXE) value
USART6_DR=data;//sending value"A"into USART2_DR register
  }

//Recevier character
unsigned char UART6_InChar(void)
{
unsigned char  variable;   //local variable declaration
while(!(USART6_SR &(0x1<<5)));  //Read USART2_SR register and check 5th bit (RXNE) value
variable= USART6_DR;

return variable ;

}

//string function
int out_string(char *str)
{
for(i=0;str[i]!='\0';i++)
{
UART6_OutChar(str[i]);
}
}

