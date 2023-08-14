/*
 * BITMATH.h
 *
 *  Created on: Aug 13, 2023
 *      Author: hp
 */

#ifndef LIB_BITMATH_H_
#define LIB_BITMATH_H_

#define SET_BIT(Reg, bitnum)       (Reg |=1<<bitnum)
#define CLR_BIT(Reg, bitnum)       (Reg &=~(1<<bitnum))
#define TOGGLE_BIT(Reg, bitnum)    (Reg ^=(1<<bitnum))
#define GET_BIT(Reg, bitnum)       ((Reg>>bitnum)& 0x01)
#define SET_BYTE(Reg,value)        ( Reg = value )


#endif /* LIB_BITMATH_H_ */
