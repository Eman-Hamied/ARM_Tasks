/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *       File:  IntCrtl.h
 *       Module:  IntCrtl
 *
 *  Description:  header file for IntCrtl Module    
 *  
 *********************************************************************************************************************/
#ifndef intCrtl_H
#define intCrtl_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"
#include "intCtrl_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/
#define RESET                       1u
#define NON_MASKABLE_INT            2u
#define HARD_FAULT                  3u
#define MEMORY_MANGEMENT            4u
#define BUS_FAULT                   5u
#define USAGE_FAULT                 6u
#define SCV_CALL                    11u
#define DEBUG_MONITOR               12u
#define PEND_SV                     14u
#define SYS_TICK                    15u
#define GPIO_PORT_A                 16u
#define GPIO_PORT_B                 17u
#define GPIO_PORT_C                 18u
#define GPIO_PORT_D                 19u
#define GPIO_PORT_E                 20u
#define UART_0                      21u
#define UART_1                      22u
#define SSI_0                       23u
#define I2C_0                       24u
#define PWM_0_FAULT                 25u
#define PWM_0_GENERATOR_0           26u
#define PWM_0_GENERATOR_1           27u
#define PWM_0_GENERATOR_2           28u
#define QEI_0                       29u
#define ADC_0_SEQUENCE_0            30u
#define ADC_0_SEQUENCE_1            31u
#define ADC_0_SEQUENCE_2            32u
#define ADC_0_SEQUENCE_3            33u
#define WDG_TIMERS_0_1              34u
#define TIMER_0A_16_32              35u
#define TIMER_0B_16_32              36u
#define TIMER_1A_16_32              37u
#define TIMER_1B_16_32              38u
#define TIMER_2A_16_32              39u
#define TIMER_2B_16_32              40u
#define ANALOG_COMPARATOR_0         41u
#define ANALOG_COMPARATOR_1         42u
#define SYSTEM_CONTROL              44u
#define FLASH_EEPROM_CONTROL        45u
#define GPIO_PORT_F                 46u
#define UART_2                      49u
#define SSI_1                       50u
#define TIMER_3A_16_32              51u
#define TIMER_3B_16_32              52u
#define I2C_1                       53u
#define QEI_1                       54
#define CAN_0                       55u
#define CAN_1                       56u
#define HIBERNATION_MODULE          59u
#define USB                         60u
#define PWM_GENERATOR_3             61u
#define UDMA_SOFTWARE               62u
#define UDMA_ERROR                  63u
#define ADC_1_SEQUENCE_0            64u
#define ADC_1_SEQUENCE_1            65u
#define ADC_1_SEQUENCE_2            66u
#define ADC_1_SEQUENCE_3            67u
#define SSI_2                       73u
#define SSI_3                       74u
#define UART_3                      75u
#define UART_4                      76u
#define UART_5                      77u
#define UART_6                      78u
#define UART_7                      79u
#define I2C_2                       84u
#define I2C_3                       85u
#define TIMER_4A_16_32              86u
#define TIMER_4B_16_32              87u
#define TIMER_5A_16_32              108u
#define TIMER_5B_16_32              109u
#define TIMER_0A_32_64              110u
#define TIMER_0B_32_64              111u
#define TIMER_1A_32_64              112u
#define TIMER_1B_32_64              113u
#define TIMER_2A_32_64              114u
#define TIMER_2B_32_64              115u
#define TIMER_3A_32_64              116u
#define TIMER_3B_32_64              117u
#define TIMER_4A_32_64              118u
#define TIMER_4B_32_64              119u
#define TIMER_5A_32_64              120u
#define TIMER_5B_32_64              121u
#define SYSTEM_EXCEPTION            122u
#define PWM_1_GENERATOR_0           150u
#define PWM_1_GENERATOR_1           151u
#define PWM_1_GENERATOR_2           152u
#define PWM_1_GENERATOR_3           153u
#define PWM_1_FAULT                 154u


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define MASTER_ENABLE     __asm(CPSIE i)


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef struct
{
  u8                  	  InterruptNum;
	u8                      Interrupt_Group;
	u8                      InterruptSubGroup;
	
} IntCtrl_InterruptCfgType;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
extern const IntCtrl_InterruptCfgType IntCtrl_InterruptCfg[];
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
 
/******************************************************************************
* \Syntax          : void IntCrtl_Init(void)                                      
* \Description     : initialize Nvic\SCB Module by parsing the Configuration 
*                    into Nvic\SCB registers                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void IntCrtl_Init(void);
 
#endif  /* intCrtl_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.h
 *********************************************************************************************************************/