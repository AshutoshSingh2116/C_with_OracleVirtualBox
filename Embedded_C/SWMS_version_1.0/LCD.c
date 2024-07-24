/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: LCD.c

*/


#include "STM32F401RBT6.h"
#include "UART6.h"
#include "LCD.h"
#include "systicktimer.h"
#include "ADC.h"

extern int Temp;
  char str[100];
void KM_LCD_MUX_Init(void)
{
        //Initilization
RCC_AHB1ENR |=(0x1<<1); //Enable portB clock
/* 1)Read AHB1ENR.
2)set 1st bit position
3)result write to AHB1*/

GPIO_PORTB_MODE &=0xFFFCF000; //Clear 0,1,2,3,4,5 and 8 bit
GPIO_PORTB_MODE |=0x0010555; //load 01 into 0,1,2,3,4,5 and 8 bit bit to PB0,PB1,PB2,PB3,PB4,PB5 and PB8 conFing

}
void KM_LCD_Init(void)
{
GPIO_PORTB_ODR |=(0x1<<8);
KM_delay(5);
KM_LCD_Write_Cmd (0x33); //
KM_delay(10);
KM_LCD_Write_Cmd (0x32);  //
KM_LCD_Write_Cmd (0x0C);  //Display On, Cursor OFF Command
KM_LCD_Write_Cmd (0x01);  //Clear display screen
KM_LCD_Write_Cmd (0x0);  //Clear display screen

}

//HIGHER NIBBLE INTILIZATION/
void high_nibble( unsigned char data)
{
GPIO_PORTB_ODR &=~(0x0F); // claer HIGH nibbel
GPIO_PORTB_ODR |=(data>>4)&(0x0F); //set and the data right shift into 4 times HIGH nibbel
GPIO_PORTB_ODR |=(0x1<<8); //Enable bit ON
KM_delay(10);
GPIO_PORTB_ODR &=~(0x1<<8);//Enable bit OFF

}

//Lower Nibble data in to LCD./


void low_nibble( unsigned char data )
{
GPIO_PORTB_ODR &=~(0x0F); // clar LOW nibbel
GPIO_PORTB_ODR |=(data)&(0x0F);//set LOW nibbel
GPIO_PORTB_ODR |=(0x1<<8); //Enable bit ON
KM_delay(10);
GPIO_PORTB_ODR &=~(0x1<<8);//Enable bit OFF

}



/* LCD command. */

void KM_LCD_Write_Cmd( unsigned char data)
{

GPIO_PORTB_ODR &=(~(0x01<<4));  //RS=0 Command  register ;
high_nibble(data);
low_nibble(data);
}

/* LCD Data (single character).*/

void KM_LCD_Write_Data( unsigned char data)
{
GPIO_PORTB_ODR |=(0x01<<4); //RS=1  Data register
high_nibble(data); // call high nibble data
low_nibble(data); //call low nibbel data
}
/*LCD Data (Multiple characters). */

void KM_LCD_Write_Str(char *str)
{
int i;
for(i=0;str[i]!='\0';i++)
KM_LCD_Write_Data(str[i]);
}


void I_to_A(int n)
 
{
int i,l=0;
int s=0;
char str[100];

while(n!=0)
{
int rem=n%10;
str[s]=rem+'0';
n=n/10;
s++;
}

for(i=0;str[i]!='\0';i++)
{
l++;
}

for(i=0;i<l/2;i++)
{
int temp=str[i];
str[i]=str[l-1-i];
str[l-1-i]=temp;
}


// KM_LCD_Init();
KM_LCD_Write_Cmd(0x01);  //Clear display screen
KM_LCD_Write_Cmd(0x80); //Force cursor to beginning ( 1st line)
     KM_LCD_Write_Str("Fine Weather");
     KM_LCD_Write_Cmd(0xC0); //Force cursor to beginning ( 2nd line)
     KM_LCD_Write_Str("Temperature: ");
     //KM_LCD_Write_Cmd(0x14); //Shift cursor position to right
      KM_LCD_Write_Str(str);
     KM_LCD_Write_Data(223); //degrees celsius command
        KM_LCD_Write_Str("C");
// KM_LCD_Write_Cmd(0x01); //Clear display screen


}


void adc_Print_lcd(void)
{
I_to_A(Temp);
}




