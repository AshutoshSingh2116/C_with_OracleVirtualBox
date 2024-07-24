/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: LCD.h

*/


void high_nibble(unsigned char);
void low_nibble(unsigned char);
void KM_LCD_Write_Cmd( unsigned char);
void KM_LCD_Write_Data( unsigned char);
void KM_LCD_Write_Str(char *str);
void i_to_a(int);
void KM_LCD_Init(void);
void KM_LCD_MUX_Init(void);
void adc_Print_lcd(void);
