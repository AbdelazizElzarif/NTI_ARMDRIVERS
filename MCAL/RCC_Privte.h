/*
 * MEM_RCC.h
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

#ifndef RCC_PRIVTE_H_
#define RCC_PRIVTE_H_
#include "STD_Tupes.h"
/* Registers Defination*/
#define RCC_BASE_ADRESS 0x40021000
typedef struct
{
	u32 CR;
	u32 CFGR;
	u32 CIR;
	u32 APB2RSTR;
	u32 APB1RSTR;
	u32 RCC_AHBENR;
	u32 RCC_APB2ENR;
	u32  RCC_APB1ENR;
	u32 RCC_BDCR;
	u32 CSR;


	}RCC_t;
#define RCC ((volatile RCC_t*)RCC_BASE_ADRESS)

/*RCC BIT*/
#define HSION   0
#define HSIRDY  1
#define HSEON   16
#define HSERDY  17
#define HSEBYP  18
#define CSSON   19
#define PLLON   24
#define PLLRDY  25
/*CFGR BIT*/
#define SW0       0
#define SW1       1
#define SWS0      2
#define SWS1      3
#define HPRE0     4
#define HPRE1     5
#define HPRE2     6
#define HPRE3     7
#define PPRE10    8
#define PPRE11    9
#define PPRE12    10
#define PPRE20    11
#define PPRE21    12
#define PPRE22    13
#define ADCPRE0   14
#define ADCPRE1   15
#define PLLSRC    16
#define PLLXTPRE  17
#define PLLMUL0   18
#define PLLMUL1   19
#define PLLMUL2   20
#define PLLMUL3   21
#define USBPRE    22
#define MCO0      24
#define MCO1      25
#define MCO2      26


#endif /* RCC_PRIVTE_H_ */
