
#ifndef UTILS_H_
#define UTILS_H_
#include "std_types.h"

//Functions Like Macro
#define set_bit(reg,bitn) reg |=((u32)1<<bitn)
#define clr_bit(reg,bitn) reg &=(~(1<<bitn))
#define get_bit(reg,bitn) ((reg&(1<<bitn))>>bitn)
#define toggle_bit(reg,bitn) reg^=(1<<bitn)
#define set_byte(reg,value) reg = value
#define GET_HWREG(BaseAddr,RegOffset)      (*((volatile u32*)(BaseAddr+RegOffset)))

#endif /* UTILS_H_ */
