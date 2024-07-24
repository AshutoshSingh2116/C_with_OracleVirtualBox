/*

* Name: Ashutosh Kumar Singh
* Date: 24-07-2024
* File Name: STM32F401RBT6.h

*/

//RCC registers
#define RCC_AHB1ENR (*(int*)(0x40023830))
#define RCC_APB2ENR (*(int *)(0x40023844))
#define RCC_APB1ENR (*(int *)(0x40023840))
#define RCC_ABP2ENR *(int*)0x40023844   
	
//GPIO
#define GPIO_PORTC_MODE   (*(int *)(0x40020800))
#define GPIO_PORTA_AFRL (*(int *)(0x40020820))

//UART REGISTERS
#define USART6_BRR (*(int *)(0x40011408))
#define USART6_CR1 (*(int *)(0x4001140C))
#define USART6_SR  (*(int *)(0x40011400))
#define USART6_DR  (*(int *)(0x40011404))

//SYSTEM_TICK_timer REGISTERS
#define STK_CTRL     (*(int *)(0xE000E010))
#define STK_LOAD     (*(int *)(0xE000E014))
#define STK_VAL      (*(int *)(0xE000E018))
#define STK_CALIB    (*(int *)(0xE000E01c))
	
//GPIOB_REGISTERS
#define GPIO_PORTB_MODE  *(int*)0x40020400   
#define GPIO_PORTB_ODR  *(int*)0x40020414    
	

//ADC REGISTERS
#define ADC_SQR3  *(int *)(0x40012034)
#define ADC_CR2   *(int *)(0x40012008)
#define ADC_SR    *(int *)(0x40012000)
#define ADC_DR    *(int *)(0x4001204c)
#define ADC_SQR1  *(int *)(0x4001202c)
	//ADC_CR1
#define ADC_CR1   *(int*)(0x40012004)

//NVIC
#define NVIC_ISER0 *(int*) (0xE000E100)
	
//RCC registers
#define RCC_AHB1ENR (*(int*)(0x40023830))
#define RCC_APB2ENR (*(int *)(0x40023844))
#define RCC_APB1ENR (*(int *)(0x40023840))
#define RCC_ABP2ENR *(int*)0x40023844   
	
//GPIO
#define GPIO_PORTC_MODE   (*(int *)(0x40020800))
#define GPIO_PORTA_AFRL (*(int *)(0x40020820))

//UART REGISTERS
#define USART6_BRR (*(int *)(0x40011408))
#define USART6_CR1 (*(int *)(0x4001140C))
#define USART6_SR  (*(int *)(0x40011400))
#define USART6_DR  (*(int *)(0x40011404))

//SYSTEM_TICK_timer REGISTERS
#define STK_CTRL     (*(int *)(0xE000E010))
#define STK_LOAD     (*(int *)(0xE000E014))
#define STK_VAL      (*(int *)(0xE000E018))
#define STK_CALIB    (*(int *)(0xE000E01c))
	
//GPIOB_REGISTERS
#define GPIO_PORTB_MODE  *(int*)0x40020400   
#define GPIO_PORTB_ODR  *(int*)0x40020414    
	

//ADC REGISTERS
#define ADC_SQR3  *(int *)(0x40012034)
#define ADC_CR2   *(int *)(0x40012008)
#define ADC_SR    *(int *)(0x40012000)
#define ADC_DR    *(int *)(0x4001204c)
#define ADC_SQR1  *(int *)(0x4001202c)
	//ADC_CR1
#define ADC_CR1   *(int*)(0x40012004)

//NVIC
#define NVIC_ISER0 *(int*) (0xE000E100)
	

