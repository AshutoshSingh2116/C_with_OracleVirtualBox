/*

* Name: Ashutosh Kumar Singh
* Date:24-07-2024
* File Name:UART6.h

*/


//DECLCARATIONS
void UART6_OutChar (unsigned char);
unsigned char UART6_InChar ( void);

void UART6_Init(void);
void UART6_Config(void);

int out_string(char *str);
//int ESP32_wifi_init();

void KM_delay(int );
void  ESP32_wifi_tx(void);
int wifi_response(void);
void ESP32_wifi_init();

