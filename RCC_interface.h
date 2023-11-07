/*
 * RCC_interface.h
 *
 *  Created on: Nov 4, 2023
 *      Author: ENG-ABDELAZIZ
 */
/*******************************************************************************/
/******************************************************************************/
/*********************** AUTHOR :Abdelaziz Elzarif*****************************/
/***********************Layer:MCAL********************************************/
/**********************SWC:RCC***********************************************/
/**********************Version:1*********************************************/

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

/*Buses name*/
typedef enum{
	RCC_AHP,
	RCC_ABP1,
	RCC_ABP2,
}Bus_t;

/*PRRIFRAL BUSES*/
typedef enum{
	/*AHP*/
		DMA1=0,
		DMA2,
		/*API*/
	    TIM2EN=0,
		TIM3EN,
		TIM4EN,
	    TIM5EN,
	    TIM6EN,
	    SPI2EN=14,
		SPI3EN,
		USART2EN,
		USART3EN,
		USART4EN,
		I2C1EN=21,
		I2C2EN,
		USBEN=25,
		CANEN=29,
		/*AP2*/
		DIOPAEN=2,
		DIOPBEN,
		DIOPCEN,
		ADC1EN=9,
		ADC2EN,
		TIM1EN,
		SPI1EN
}Perifral_t;


/* prototypes of function*/
void RCC_voidInit(void);
void RCC_voidEnableClockperipheral(Bus_t bus_id,Perifral_t perf_id);
void RCC_voidDisable_Clock_peripheral(Bus_t bus_id,Perifral_t perf_id);










#endif /* RCC_INTERFACE_H_ */
