/*******************************************************************************/
/******************************************************************************/
/*********************** AUTHOR :Abdelaziz Elzarif*****************************/
/***********************Layer:MCAL********************************************/
/**********************SWC:RCC***********************************************/
/**********************Version:1*********************************************/

#include "STD_Tupes.h"
#include "RCC_Cfg.h"
#include "RCC_interface.h"
#include "RCC_Privte.h"
#include "utils.h"


void RCC_voidInit(void)
{

#if CLK_SOURCE==HSI
	SET_BIT(RCC->CR,HSION);
	CLR_BIT(RCC->CFGR,SW0);
	CLR_BIT(RCC->CFGR,SW1);
#elif CLK_SOURCE==HSE
	SET_BIT(RCC->CR,HSEON);
	SET_BIT(RCC_CFGR,SW0);
	CLR_BIT(RCC_CFGR,SW1);
#else
	SET_BIT(RCC->CR, PLLON);
	CLR_BIT(RCC->CFGR,SW0);
	SET_BIT(RCC->CFGR,SW1);
#endif

}

void RCC_voidEnableClockperipheral(Bus_t bus_id,Perifral_t perf_id)
{
	if (perf_id<32)
	{
		switch(bus_id)
		{
		case RCC_AHP  :SET_BIT(RCC->RCC_AHBENR,perf_id) ; break;
		case RCC_ABP2 :SET_BIT(RCC->RCC_APB2ENR,perf_id); break;
		case RCC_ABP1 :SET_BIT(RCC->RCC_APB1ENR,perf_id); break;

		}

	}
	else
	{
		/* ERROR*/
	}
}
void RCC_voidDisable_Clock_peripheral(Bus_t bus_id,Perifral_t perf_id)
{
	if (perf_id<32)
		{
			switch(bus_id)
			{
			case RCC_AHP  :CLR_BIT(RCC->RCC_AHBENR,perf_id) ; break;
			case RCC_ABP2 :SET_BIT(RCC->RCC_APB2ENR,perf_id); break;
			case RCC_ABP1 :SET_BIT(RCC->RCC_APB1ENR,perf_id); break;

			}

		}
	else
	{
		/* ERROR*/
	}
}

