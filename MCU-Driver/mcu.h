#ifndef MCU_H
#define MCU_H

#include "std_types.h"


/*Macros and Types*/

typedef u32 Mcu_Reset_Cause;

#define    Mcu_WDT_1_RESET              32u
#define    Mcu_SOFTWARE_RESET           16u
#define    Mcu_WDT_0_RESET              8u
#define    Mcu_BROWN_OUT_RESET          4u
#define    Mcu_POWER_ON_RESET           2u
#define    Mcu_EXTERNAL_RESET           1u
#define    Mcu_MOSC_FAILURE_RESET       0x10000u
#define    Clock_Source_Frequency_3     0x2
#define    Clock_Source_Frequency_4     0x3
#define    Clock_Source_Frequency_5     0x4
#define    Clock_Source_Frequency_6     0x5
#define    Clock_Source_Frequency_7     0x6
#define    Clock_Source_Frequency_8     0x7
#define    Clock_Source_Frequency_9     0x8
#define    Clock_Source_Frequency_10    0x9
#define    Clock_Source_Frequency_11    0xA
#define    Clock_Source_Frequency_12    0xB
#define    Clock_Source_Frequency_13    0xC
#define    Clock_Source_Frequency_14    0xD
#define    Clock_Source_Frequency_15    0xE
#define    Clock_Source_Frequency_16    0xF

/*The 1th bit represents the register number, the 0th bit represents the field number */

#define   WD_Timer_0                    0x00u
#define   WD_Timer_1                    0x01u
#define   GP_Timer_0                    0x10u
#define   GP_Timer_1                    0x11u
#define   GP_Timer_2                    0x12u
#define   GP_Timer_3                    0x13u
#define   GP_Timer_4                    0x14u
#define   GP_Timer_5                    0x15u
#define   GPIO_Port_A                   0x20u
#define   GPIO_Port_B                   0x21u
#define   GPIO_Port_C                   0x22u
#define   GPIO_Port_D                   0x23u
#define   GPIO_Port_E                   0x24u
#define   GPIO_Port_F                   0x25u
#define   Micro_Memory_Access           0x30u
#define   Hibernation_Module            0x50u
#define   UART_0                        0x60u
#define   UART_1                        0x61u
#define   UART_2                        0x62u
#define   UART_3                        0x36u
#define   UART_4                        0x64u
#define   UART_6                        0x65u
#define   UART_7                        0x66u
#define   SSI_0                         0x70u
#define   SSI_1                         0x71u
#define   SSI_2                         0x72u
#define   SSI_3                         0x73u
#define   I2C_0                         0x80u
#define   I2C_1                         0x81u
#define   I2C_2                         0x82u
#define   I2C_3                         0x83u
#define   USB_Module                    0xA0u
#define   CAN_0                         0xD0u
#define   CAN_1                         0xD1u
#define   ADC_0                         0xE0u
#define   ADC_1                         0xE1u
#define   Analog_Comparator             0xF0u
#define   PWM_0                         0x100u
#define   PWM_1                         0x101u
#define   QEI_0                         0x110u
#define   QEI_1                         0x111u
#define   EEPROM                        0x160u
#define   WGP_Timer_0                   0x170u
#define   WGP_Timer_1                   0x171u
#define   WGP_Timer_2                   0x172u
#define   WGP_Timer_3                   0x173u
#define   WGP_Timer_4                   0x174u
#define   WGP_Timer_5                   0x175u


typedef enum{
    MCU_PLL_UNLOCKED,
    MCU_PLL_LOCKED
}Mcu_PllStatusType;


typedef u8 Mcu_Clock;

typedef enum
{
    MCU_Clock_PIOSC = 0x1,
    MCU_Clock_MOSC = 0x0,
    MCU_Clock_LFIOSC = 0x3,
    MCU_Clock_PIOSC_diV_4 = 0x2

}Mcu_Clock_Source;

typedef u8 Mcu_ClockType;

typedef struct 
{
    u8 Clock_Source;
    u8 Pll_Use;
    u32 Freq;

}Mcu_Config;


/* Functions Prototypes */

Mcu_Reset_Cause MCU_GetResetRawValue (void);
Mcu_PllStatusType Mcu_GetPllStatus (void);
void Mcu_InitClock(Mcu_Clock clock_settings);
void Mcu_PerformReset (void);
u8 Mcu_DistributePllClock(void);

#endif  /* MCU_H */

