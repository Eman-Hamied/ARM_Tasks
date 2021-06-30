#include "mcu.h"
#include "mcu_config.h"
#include "std_types.h"

/* Choose Clock Gates 
WD_Timer_1                    
WD_Timer_0                    
GP_Timer_0                    
GP_Timer_1                    
GP_Timer_2                    
GP_Timer_3                    
GP_Timer_4                    
GP_Timer_5                    
GPIO_Port_A                   
GPIO_Port_B                   
GPIO_Port_C                   
GPIO_Port_D                   
GPIO_Port_E                   
GPIO_Port_F                   
Micro_Memory_Access           
Hibernation_Module            
UART_0                        
UART_1                        
UART_2                        
UART_3                        
UART_4                        
UART_6                        
UART_7                        
SSI_0                         
SSI_1                         
SSI_2                         
SSI_3                         
I2C_0                         
I2C_1                         
I2C_2                         
I2C_3                         
USB_Module                    
CAN_0                         
CAN_1                         
ADC_0                         
ADC_1                         
Analog_Comparator             
PWM_0                         
PWM_1                         
QEI_0                         
QEI_1                         
EEPROM                        
WGP_Timer_0                   
WGP_Timer_1                   
WGP_Timer_2                   
WGP_Timer_3                   
WGP_Timer_4                   
WGP_Timer_5              
*/

const u32 Peripheral_Clock_Gates[Activated_Clock_Gates_Count] = {
	
    UART_0,
    ADC_0,
		GPIO_Port_A
};



const Mcu_Config Mcu_Config_Settings[Mcu_CLOCK_SETTINGS_SIZE] = {

    /* Clock Source       Pll Use      Frequency */
    {MCU_Clock_MOSC,      ENABLE,      		 Clock_Source_Freq},
    {MCU_Clock_PIOSC,     DISABLE,     Clock_Source_Freq}
    
};

