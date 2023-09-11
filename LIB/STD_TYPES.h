/***************************************************************/
/***************** author: Kareem Nader Naoum     **************/
/***************** date: 29/08/2023               **************/
/***************** version: 0.1                   **************/
/***************** module: STD_TYPES.h            **************/
/***************************************************************/
#ifndef STD_TUPES_H
#define STD_TUPES_H

typedef unsigned char            u8;
typedef unsigned short           u16;
typedef unsigned int             u32;
typedef unsigned long            u64;


typedef signed char              s8;
typedef signed short             s16;
typedef signed int               s32;
typedef signed long              s64;


typedef  float                   f32;
typedef  double                  f64;
typedef  long double             f96;


typedef u8                       std_ReturnType;
#define E_OK                     (std_ReturnType)1
#define E_NOT_OK                 (std_ReturnType)0


#endif /*STD_TUPES_H*/
