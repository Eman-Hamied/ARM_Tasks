#include "mcu.h"
#include "Mcu_Hw.h"
#include "mcu_config.h"
#include "std_types.h"
#include "Utils.h"

//extern const Mcu_Config Mcu_Config_Settings[];
extern const Mcu_Config Mcu_Config_Settings[];
extern u32 Peripheral_Clock_Gates[];



/* This function initiate the clock I chose */

void Mcu_InitClock (Mcu_Clock clock_settings){
    u8 i;
    u32 reg_Offset;
    u32 bit_Number;

    /* Configure Peripherals gates */
    for (i = 0; i < Activated_Clock_Gates_Count; i++)
    {
        reg_Offset = (Peripheral_Clock_Gates[i] / 0x10) * 4 ;
        bit_Number = Peripheral_Clock_Gates[i] % 0x10;
        GET_HWREG(RCG_BASE_ADDRESS,reg_Offset) |=  (u32)1 << bit_Number ;
    }

    if (Mcu_Config_Settings[clock_settings].Clock_Source == MCU_Clock_MOSC)
    {
        clr_bit(RCC,0);
    }


    RCC = ((u32)4 << Mcu_Config_Settings[clock_settings].Clock_Source);
    

    if (Mcu_Config_Settings[clock_settings].Pll_Use == 0x1){
			
			 /* to configure SYSDIV */
       RCC =  Clock_Source_Freq << 23;

        /* We write 0 to this bit to enable Pll */
        clr_bit(RCC,13);

    }
    else{
      /* We write 1 to this bit to disable Pll */
				set_bit(RCC,11);
        set_bit(RCC,13);

    }    
}



/* This function returns the value of the register to know the cause of the reset */

Mcu_Reset_Cause MCU_GetResetRawValue (void){
    Mcu_Reset_Cause reset_value = RESC;
    RESC = 0;
    return reset_value;    
}


/* This function writes to APINT register in the 3rd bit to perform system reset */

void Mcu_PerformReset (void){
    APINT = (u32)0x05FA0000 | ((u32)ENABLE << 2);
}


/* This function returns the status of Pll */

Mcu_PllStatusType Mcu_GetPllStatus (void){
				u8 status = get_bit(PLLSTAT,0);
        return status;
}

u8 Mcu_DistributePllClock(void){
    u8 std_type = STD_E_NOT_OK;
    if (get_bit(RCC,13) == 0 &&  Mcu_GetPllStatus() == MCU_PLL_LOCKED)
    {
        clr_bit(RCC,11);
        std_type = STD_E_OK;
    }
    return std_type; 
}

