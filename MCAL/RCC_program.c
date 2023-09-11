/***************************************************************/
/***************** author: Kareem Nader Naoum     **************/
/***************** date: 29/08/2023               **************/
/***************** version: 0.1                   **************/
/***************** module: RCC_programe.c         **************/
/***************************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


std_ReturnType Mcal_Rcc_InitSys_clk()
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
    #if RCC_SYSCLK == RCC_HSE

       #if RCC_CLK_BYPASS == RCC_RC_CLK
            SET_BIT(RCC_CR, RCC__CR_HSEBYP); /**< choose RC as a SYSCLK */
        
        #elif RCC_CLK_BYPASS == RCC_CRYSTAL_CLK
            CLR_BIT(RCC_CR, RCC__CR_HSEBYP); /**< choose CRYSTAL as a SYSCLK */
       
        #else 
            #error "Wrong Choice !! please choose either RCC_RC_CLK (1) or RCC_CRYSTAL_CLK (0) "
       
        #endif 
    SET_BIT (RCC_CR,RCC__CR_HSEON);
    while(!GET_BIT(RCC_CR, RCC__CR_HSERDY));
        SET_BITs(0, 1, 1, RCC_CFGR);
        Local_FunctionStatus = E_OK;

    #elif RCC_SYSCLK == RCC_HSI
        SET_BIT (RCC_CR,RCC__CR_HSION);
        while(!GET_BIT(RCC_CR, RCC__CR_HSIRDY));
        SET_BITs(0, 1, 0, RCC_CFGR);
        Local_FunctionStatus = E_OK;


    #elif RCC_SYSCLK == RCC_PLL
        //todo
        SET_BIT (RCC_CR,RCC__CR_PLLON);
        while(!GET_BIT(RCC_CR, RCC__CR_PLLRDY));
        {
            SET_BITs(0, 1, 0, RCC_CFGR);
            SET_BITs(1, 1, 1, RCC_CFGR);
        }
        SET_BITs(16, 1, PLLSRC, RCC_CFGR);
        SET_BITs(17, 1, PLLXTPRE, RCC_CFGR);
        CONVERT_AND_SET_BITS(PLLMUL,RCC_CFGR);
        Local_FunctionStatus = E_OK;

    #else
        #error "you must chose HSE or HSI or PLL"
    #endif

    return Local_FunctionStatus;


}
std_ReturnType Mcal_Rcc_EnablePerf(u8 pref_Id, u8 Bus_Id)
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
    switch (Bus_Id)
    {
    case RCC_AHB:
    SET_BIT(RCC_AHBENR,pref_Id);
    Std_ReturnType Local_FunctionStatus = E_OK;  
    break;

    case RCC_APB1:
    SET_BIT(RCC_APB1ENR,pref_Id);
    Std_ReturnType Local_FunctionStatus = E_OK;
    break;
    
    case RCC_ABP2:
    SET_BIT(RCC_APB2ENR, pref_Id);
    Std_ReturnType Local_FunctionStatus = E_OK;
    break;
    
    default:
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
        break;
    }
    
}
std_ReturnType Mcal_Rcc_DisablePerf(u8 pref_Id, u8 Bus_Id)
{
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
    switch (Bus_Id)
    {
    case RCC_AHB:
    CLR_BIT(RCC_AHBENR,pref_Id);
    Std_ReturnType Local_FunctionStatus = E_OK;  
    break;

    case RCC_APB1:
    CLR_BIT(RCC_APB1ENR,pref_Id);
    Std_ReturnType Local_FunctionStatus = E_OK;
    break;
    
    case RCC_ABP2:
    CLR_BIT(RCC_APB2ENR, pref_Id);
    Std_ReturnType Local_FunctionStatus = E_OK;
    break;
    
    default:
    Std_ReturnType Local_FunctionStatus = E_NOT_OK;
        break;
    }
}