/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: WIFI.c

*/


#include "STM32F401RBT6.h"
#include "UART6.h"
#include "LCD.h"
#include <stdio.h>

static char buffer[1000],fetch[1000];
static int ret=1;
 extern int Temp;

//WIFI INTIALIZATION FUNCTION
void ESP32_wifi_init()
{
out_string("AT\r\n");  //TEST AT STARTUP
//KM_delay(250);
/*
while (wifi_response()!=0)
{
out_string("AT\r\n");  //TEST AT STARTUP
}*/
out_string("AT+RST\r\n"); //RESTART A MODULE
KM_delay(250);
out_string("AT+CWMODE=3\r\n"); //SET WIFI MODE
KM_delay(250);
/*while (wifi_response()!=0)
{
out_string("AT+CWMODE=3\r\n"); //SET WIFI MODE

}*/
out_string("AT+CWLAP\r\n");  //LIST OF ACCESS POINTS
KM_delay(250);


out_string("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n"); // JOIN ACCESS POINTS
KM_delay(250);
/*while (wifi_response()!=0)
{
out_string("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n"); // JOIN ACCESS POINTS
}*/
out_string("AT+CIFSR\r\n");  //GET IP ADDRESS
KM_delay(250);
out_string("AT+CIPMUX=0\r\n"); //SET CONNECTION MUX
KM_delay(250);
/* while (wifi_response()!=0)
{
out_string("AT+CIPMUX=0\r\n"); //SET CONNECTION MUX
}*/
out_string("AT+CIPMODE=0\r\n");   //SET DATA TRASMISSION MODE
KM_delay(250);
}

void  ESP32_wifi_module()
{
out_string("AT+CIPSTATUS\r\n");   //GET STATUS
KM_delay(250);
/*while (wifi_response()!=0)
{
out_string("AT+CIPSTATUS\r\n");   //GET STATUS
}*/
out_string("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n"); //MAKE TC CONNECTION
KM_delay(250);
/*while (wifi_response()!=0)
{
out_string("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n"); //MAKE TC CONNECTION
}*/
out_string("AT+CIPSEND=39\r\n");   //SEND TCP
KM_delay(250);
/*while (wifi_response()!=0)
{
out_string("AT+CIPSEND=39\r\n");   //SEND TCP
}*/

sprintf(fetch,"GET /page.php?temp=%d&hum=60&dev=05\r\n\r\n",Temp);
KM_delay(250);
out_string(fetch);
out_string("AT+CIPCLOSE=44\r\n");  //CLOSE TCP CONNECTION
KM_delay(250);
/*while (wifi_response()!=0)
{
out_string("AT+CIPCLOSE=44\r\n");  //CLOSE TCP CONNECTION
}
}*/
}
int wifi_response(void)
{
int i;
for(i=0;i<100;i++)
{
buffer[i]=UART6_InChar ();
if((buffer[i]=='K') && (buffer[i-1]=='O'))
{
return 0;
// return ret;
}
}
return ret;
}



