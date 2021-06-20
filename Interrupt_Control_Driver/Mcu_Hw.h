/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description:  header file for Registers definition    
 *  
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS             0xE000E000
#define APINT                                  *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C))
#define INTCTRL                                *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04))
#define NVIC_EN0_R                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x100))
#define NVIC_EN1_R                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x104))
#define NVIC_EN2_R                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x108))
#define NVIC_EN3_R                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x10C))
#define NVIC_EN4_R                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x110))
#define NVIC_PRI_0                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x400))
#define NVIC_PRI_1                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x404))
#define NVIC_PRI_2                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x408))
#define NVIC_PRI_3                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x40C))
#define NVIC_PRI_4                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x410))
#define NVIC_PRI_5                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x414))
#define NVIC_PRI_6                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x418))
#define NVIC_PRI_7                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x41C))
#define NVIC_PRI_8                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x420))
#define NVIC_PRI_9                             *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x424))
#define NVIC_PRI_10                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x428))
#define NVIC_PRI_11                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x42C))
#define NVIC_PRI_12                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x430))
#define NVIC_PRI_13                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x434))
#define NVIC_PRI_14                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x438))
#define NVIC_PRI_15                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x43C))
#define NVIC_PRI_16                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x440))
#define NVIC_PRI_17                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x444))
#define NVIC_PRI_18                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x448))
#define NVIC_PRI_19                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x44C))
#define NVIC_PRI_20                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x450))
#define NVIC_PRI_21                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x454))
#define NVIC_PRI_22                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x458))
#define NVIC_PRI_23                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x45C))
#define NVIC_PRI_24                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x460))
#define NVIC_PRI_25                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x464))
#define NVIC_PRI_26                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x468))
#define NVIC_PRI_27                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x46C))
#define NVIC_PRI_28                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x470))
#define NVIC_PRI_29                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x474))
#define NVIC_PRI_30                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x478))
#define NVIC_PRI_31                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x47C))
#define NVIC_PRI_32                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x480))
#define NVIC_PRI_33                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x484))
#define NVIC_PRI_34                            *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x488))
#define NVIC_PRI_BASE_ADDRESS                   0xE000E400













/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 

 
#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/