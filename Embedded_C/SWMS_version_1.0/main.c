/*
* Name:Ashutosh Kumar Singh
* Date:24-07-2024
* File Name: main.c
*/

#include "STM32F401RBT6.h"
#include "UART6.h"
#include "LCD.h"
#include "systicktimer.h"
#include "ADC.h"
void ESP32_wifi_module();
void ESP32_wifi_init();
//MAIN FUNCTION
//unsigned char str[100];
 static int n;
 extern int flag;
int main()
{
systick_init();
KM_LCD_MUX_Init();
KM_LCD_Init();

KM_ADC_MUX_init ();
km_ADC_init();

UART6_Init();
UART6_Config();
ESP32_wifi_init();
//operation
while(1)
{
KM_delay(5000); // 5 sec delay
ADC_CR2 |=(0x1<<30);
if(flag==1)
{
adc_Print_lcd();
flag=0;
}
//ESP32_wifi_tx();


ESP32_wifi_module();

}

}

