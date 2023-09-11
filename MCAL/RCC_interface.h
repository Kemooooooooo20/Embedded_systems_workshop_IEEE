/***************************************************************/
/***************** author: Kareem Nader Naoum     **************/
/***************** date: 29/08/2023               **************/
/***************** version: 0.1                   **************/
/***************** module: RCC_interface.h        **************/
/***************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/*
* the following values represents which bus would be selected!
* the numbers are assumed and not a spesific numbers given from data sheet!
*/
#define RCC_AHB     0
#define RCC_APB1    1
#define RCC_APB2    2




#define RCC_AHBENR_DMA1EN      0
#define RCC_AHBENR_DMA2EN      1
#define RCC_AHBENR_SRAMEN      2
#define RCC_AHBENR_FLITFEN     4
#define RCC_AHBENR_CRCEN       6
#define RCC_AHBENR_FSMCEN      8
#define RCC_AHBENR_SDIOEN      10


#define RCC_APB1ENR_TIM2EN      0       /*    Timer 2 clock enable           */
#define RCC_APB1ENR_TIM3EN      1       /*    Timer 3 clock enable           */
#define RCC_APB1ENR_TIM4EN      2       /*    Timer 4 clock enable           */
#define RCC_APB1ENR_TIM5EN      3       /*    Timer 5 clock enable           */
#define RCC_APB1ENR_TIM6EN      4       /*    Timer 6 clock enable           */
#define RCC_APB1ENR_TIM7EN      5       /*    Timer 7 clock enable           */
#define RCC_APB1ENR_TIM12EN     6       /*    Timer 12 clock enable          */
#define RCC_APB1ENR_TIM13EN     7       /*    Timer 13 clock enable          */
#define RCC_APB1ENR_TIM14EN     8       /*    Timer 14 clock enable          */
#define RCC_APB1ENR_WWDGEN      11      /*    Window Watchdog clock enable   */
#define RCC_APB1ENR_SPI2EN      14      /*    SPI2 clock enable              */
#define RCC_APB1ENR_SPI3EN      15      /*    SPI3 clock enable              */
#define RCC_APB1ENR_USART2EN    17      /*    USART2 clock enable            */
#define RCC_APB1ENR_USART3EN    18      /*    USART3 clock enable            */
#define RCC_APB1ENR_UART4EN     19      /*    UART4 clock enable             */
#define RCC_APB1ENR_UART5EN     20      /*    UART5 clock enable             */
#define RCC_APB1ENR_I2C1EN      21      /*    I2C1 clock enable              */
#define RCC_APB1ENR_I2C2EN      22      /*    I2C2 clock enable              */
#define RCC_APB1ENR_USBEN       23      /*    USB clock enable               */
#define RCC_APB1ENR_CANEN       25      /*    CAN clock enable               */
#define RCC_APB1ENR_BKPEN       27      /*    Backup interface clock enable  */
#define RCC_APB1ENR_PWREN       28      /*    Power interface clock enable   */
#define RCC_APB1ENR_DACEN       29      /*    DAC clock enable               */



#define RCC_APB2ENR_AFIOEN      0       /*       Alternate function IO clock enable */
#define RCC_APB2ENR_IOPAEN      2       /*       I/O port A clock enable            */
#define RCC_APB2ENR_IOPBEN      3       /*       I/O port B clock enable            */
#define RCC_APB2ENR_IOPCEN      4       /*       I/O port C clock enable            */
#define RCC_APB2ENR_IOPDEN      5       /*       I/O port D clock enable            */
#define RCC_APB2ENR_IOPEEN      6       /*       I/O port E clock enable            */
#define RCC_APB2ENR_IOPFEN      7       /*       I/O port F clock enable            */
#define RCC_APB2ENR_IOPGEN      8       /*       I/O port G clock enable            */
#define RCC_APB2ENR_ADC1EN      9       /*       ADC1 clock enable                  */
#define RCC_APB2ENR_ADC2EN      10      /*       ADC2 clock enable                  */
#define RCC_APB2ENR_TIM1EN      11      /*       Timer 1 clock enable               */
#define RCC_APB2ENR_SPI1EN      12      /*       SPI1 clock enable                  */
#define RCC_APB2ENR_TIM8EN      13      /*       Timer 8 clock enable               */
#define RCC_APB2ENR_USART1EN    14      /*       USART1 clock enable                */
#define RCC_APB2ENR_ADC3EN      15      /*       ADC3 clock enable                  */
#define RCC_APB2ENR_TIM9EN      19      /*       Timer 9 clock enable               */
#define RCC_APB2ENR_TIM10EN     20      /*       Timer 10 clock enable              */
#define RCC_APB2ENR_TIM11EN     21      /*       Timer 11 clock enable              */



std_ReturnType Mcal_Rcc_InitSys_clk();
std_ReturnType Mcal_Rcc_EnablePerf(u8 pref_Id, u8 Bus_Id);
std_ReturnType Mcal_Rcc_DisablePerf(u8 pref_Id, u8 Bus_Id);


#endif /*RCC_INTERFACE_H*/