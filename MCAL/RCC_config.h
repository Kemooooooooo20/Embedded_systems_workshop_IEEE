/***************************************************************/
/***************** author: Kareem Nader Naoum     **************/
/***************** date: 29/08/2023               **************/
/***************** version: 0.1                   **************/
/***************** module: RCC_config.h           **************/
/***************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

#define RCC_SYSCLK          RCC_HSE

#if RCC_SYSCLK == RCC_HSE
    #define RCC_CLK_BYPASS        RCC_CRYSTAL_CLK                            
#endif 

#define PLLSRC = RCC_PLLSRC_HSE     /*you can cgoose either HSE or HSI/2 as an input to the pll*/
#define PLLXTPRE = PLLXTPRE_HSE_NOT_BY_2     /*if you choose HSE as an input you can choose if you want to devide it by 2 or not*/
#define PLLMUL = PLL_input_clock_BY_2        /*you could multply the input clock from *2 up to *16 by just change the number after "BY_"*/

#endif /*RCC_CONFIG_H*/