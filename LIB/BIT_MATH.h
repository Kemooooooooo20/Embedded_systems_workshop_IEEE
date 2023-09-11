/***************************************************************/
/***************** author: Kareem Nader Naoum     **************/
/***************** date: 29/08/2023               **************/
/***************** version: 0.1                   **************/
/***************** module: BIT_MATH.h            **************/
/***************************************************************/
#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(REG, BIT_NO)  REG |= (1 << BIT_NO)
#define CLR_BIT(REG, BIT_NO)  REG &= ~(1 << BIT_NO)
#define TOG_BIT(REG, BIT_NO)  REG ^= (1 << BIT_NO)
#define GET_BIT(REG, BIT_NO)  ((REG & (1 << BIT_NO)) >> BIT_NO)
#define SET_BITs(startBit, numBits, value, register) \
    do { \
        uint32_t mask = ((1 << numBits) - 1) << startBit; \
        uint32_t regValue = (register); \
        regValue &= ~mask; \
        regValue |= ((value & ((1 << numBits) - 1)) << startBit); \
        (register) = regValue; \
    } while (0)



    #define CONVERT_AND_SET_BITS(num, reg) \
    do { \
        int _binaryNum[32]; \
        int _i = 0, _j = 18; \
        int _num = (num); \
        if (_num == 0) { \
            for (; _j <= 21; _j++) { \
                SET_BITs(_j, 1, 0, (reg)); \
            } \
        } else { \
            while (_num > 0) { \
                _binaryNum[_i++] = _num % 2; \
                _num /= 2; \
                SET_BITs(_j++, 1, _binaryNum[_i - 1], (reg)); \
            } \
        } \
    } while (0)





#endif /*BIT_MATH_H*/