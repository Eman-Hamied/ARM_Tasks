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

#define GPIO_PORT_A                 0u
#define GPIO_PORT_B                 1u
#define GPIO_PORT_C                 2u
#define GPIO_PORT_D                 3u
#define GPIO_PORT_E                 4u
#define UART_0                      5u
#define UART_1                      6u
#define SSI_0                       7u
#define I2C_0                       8u
#define PWM_0_FAULT                 9u
#define PWM_0_GENERATOR_0           10u
#define PWM_0_GENERATOR_1           11u
#define PWM_0_GENERATOR_2           12u
#define QEI_0                       13u
#define ADC_0_SEQUENCE_0            14u
#define ADC_0_SEQUENCE_1            15u
#define ADC_0_SEQUENCE_2            16u
#define ADC_0_SEQUENCE_3            17u
#define WDG_TIMERS_0_1              18u
#define TIMER_0A_16_32              19u
#define TIMER_0B_16_32              20u
#define TIMER_1A_16_32              21u
#define TIMER_1B_16_32              22u
#define TIMER_2A_16_32              23u
#define TIMER_2B_16_32              24u
#define ANALOG_COMPARATOR_0         25u
#define ANALOG_COMPARATOR_1         26u
#define SYSTEM_CONTROL              28u
#define FLASH_EEPROM_CONTROL        29u
#define GPIO_PORT_F                 30u
#define UART_2                      33u
#define SSI_1                       34u
#define TIMER_3A_16_32              35u
#define TIMER_3B_16_32              36u
#define I2C_1                       37u
#define QEI_1                       38u
#define CAN_0                       39u
#define CAN_1                       40u
#define HIBERNATION_MODULE          43u
#define USB                         44u
#define PWM_GENERATOR_3             45u
#define UDMA_SOFTWARE               46u
#define UDMA_ERROR                  47u
#define ADC_1_SEQUENCE_0            48u
#define ADC_1_SEQUENCE_1            49u
#define ADC_1_SEQUENCE_2            50u
#define ADC_1_SEQUENCE_3            51u
#define SSI_2                       57u
#define SSI_3                       58u
#define UART_3                      59u
#define UART_4                      60u
#define UART_5                      61u
#define UART_6                      62u
#define UART_7                      63u
#define I2C_2                       68u
#define I2C_3                       69u
#define TIMER_4A_16_32              70u
#define TIMER_4B_16_32              71u
#define TIMER_5A_16_32              92u
#define TIMER_5B_16_32              93u
#define TIMER_0A_32_64              94u
#define TIMER_0B_32_64              95u
#define TIMER_1A_32_64              96u
#define TIMER_1B_32_64              97u
#define TIMER_2A_32_64              98u
#define TIMER_2B_32_64              99u
#define TIMER_3A_32_64              100u
#define TIMER_3B_32_64              101u
#define TIMER_4A_32_64              102u
#define TIMER_4B_32_64              103u
#define TIMER_5A_32_64              104u
#define TIMER_5B_32_64              105u
#define SYSTEM_EXCEPTION            106u
#define PWM_1_GENERATOR_0           134u
#define PWM_1_GENERATOR_1           135u
#define PWM_1_GENERATOR_2           136u
#define PWM_1_GENERATOR_3           137u
#define PWM_1_FAULT                 138u


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