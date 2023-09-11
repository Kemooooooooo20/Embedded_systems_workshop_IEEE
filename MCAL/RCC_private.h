/***************************************************************/
/***************** author: Kareem Nader Naoum     **************/
/***************** date: 29/08/2023               **************/
/***************** version: 0.1                   **************/
/***************** module: RCC_private.h            ************/
/***************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


#define RCC_BDCR            (* (volatile u32 * )(0x40021020))
#define RCC_CR              (* (volatile u32 * )(0x40021000))
#define RCC_CFGR            (* (volatile u32 * )(0x40021004))
#define RCC_CIR             (* (volatile u32 * )(0x40021008))
#define RCC_APB2RSTR        (* (volatile u32 * )(0x4002100C))
#define RCC_APB1RSTR        (* (volatile u32 * )(0x40021010))
#define RCC_AHBENR          (* (volatile u32 * )(0x40021014))
#define RCC_APB2ENR         (* (volatile u32 * )(0x40021018))
#define RCC_APB1ENR         (* (volatile u32 * )(0x4002101C))



#define RCC_HSI                   0
#define RCC_HSE                   1
#define RCC_PLL                   2



#define RCC__CR_HSION             0
#define RCC__CR_HSIRDY            1
#define RCC__CR_HSEON            16
#define RCC__CR_HSERDY           17
#define RCC__CR_HSEBYP           18
#define RCC__CR_CSSON            19
#define RCC__CR_PLLON            24
#define RCC__CR_PLLRDY           25


#define RCC_CRYSTAL_CLK          0   
#define RCC_RC_CLK               1   



#define RCC_PLLSRC_HSI_by_2        0
#define RCC_PLLSRC_HSE             1

#define PLLXTPRE_HSE_NOT_BY_2      0
#define PLLXTPRE_HSE_BY_2          1


#define PLL_input_clock_BY_2        0
#define PLL_input_clock_BY_3        1
#define PLL_input_clock_BY_4        2
#define PLL_input_clock_BY_5        3
#define PLL_input_clock_BY_6        4
#define PLL_input_clock_BY_7        5
#define PLL_input_clock_BY_8        6
#define PLL_input_clock_BY_9        7
#define PLL_input_clock_BY_10       8
#define PLL_input_clock_BY_11       9
#define PLL_input_clock_BY_12       10
#define PLL_input_clock_BY_13       11
#define PLL_input_clock_BY_14       12
#define PLL_input_clock_BY_15       13
#define PLL_input_clock_BY_16       14
#define PLL_input_clock_BY_16       15


#endif /*RCC_PRIVATE_H*/