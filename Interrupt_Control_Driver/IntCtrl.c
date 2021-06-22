/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  IntCrtl.c
 *        \brief  Nested Vector Interrupt Controller Driver
 *
 *      \details  The Driver Configure All MCU interrupts Priority into gorups and subgroups
 *                Enable NVIC Interrupt Gate for Peripherals
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"
#include "intCtrl.h"
#include "Mcu_Hw.h"
#include "intCtrl_Cfg.h"
#include "Utils.h"

extern const IntCtrl_InterruptCfgType IntCtrl_InterruptCfg[];


/**********************************************************************************************************************
 *  Macros
 *********************************************************************************************************************/

#define INTCTR_PRI_GROUPING_XXX	  4
#define INTCTR_PRI_GROUPING_XXY   5
#define INTCTR_PRI_GROUPING_XYY   6
#define INTCTR_PRI_GROUPING_YYY   7

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
void IntCrtl_Init(void)
{
		u8 i;
		u8 intNum;
		u8 intGroup;
		u8 intSubGroup;
		u8 PRI_Num;
		u8 PRI_Offset;
		u32 locGroupingField;

	/*TODO Configure Grouping\SubGrouping System in APINT register in SCB*/

    APINT = (u32)0x05FA0000 | (u32)(INTCTR_PRI_GROUPING_SELECTOR << 8); //Shifted by 8 so we can put the config in the 2nd byte 

    for (i=0; i< NUM_OF_ACTIVATED_INTERRUPTS; i++){

        intNum = IntCtrl_InterruptCfg[i].InterruptNum;
        intGroup = IntCtrl_InterruptCfg[i].Interrupt_Group;
        intSubGroup = IntCtrl_InterruptCfg[i].InterruptSubGroup;

    /*TODO : Assign Group\Subgroup priority in NVIC_PRIx Nvic and SCB_SYSPRIx Registers*/

    /* Create Grouping Field */
    #if (INTCTR_PRI_GROUPING_SELECTOR  == INTCTR_PRI_GROUPING_XXX)
            locGroupingField = intGroup;
    #elif (INTCTR_PRI_GROUPING_SELECTOR  == INTCTR_PRI_GROUPING_XXY) 
            locGroupingField = ((intGroup<<1)&0x6) | (intSubGroup&0x1);
    #elif (INTCTR_PRI_GROUPING_SELECTOR  == INTCTR_PRI_GROUPING_XYY) 
            locGroupingField = ((intGroup<<2)&0x4) | (intSubGroup&0x3);
    #elif (INTCTR_PRI_GROUPING_SELECTOR  == NVIC_GROUPING_SYSTEM_YYY) 
            locGroupingField = intSubGroup;
    #else
        #error INVALID GROUPING SELECTION
    #endif

    // To get which PRI Register we will put the value in
	    PRI_Num = (intNum / 4)*4;

    // % sign to know which fields we will configure, we multiplied by 8 to go to the right field, and we added 5 because all registers starts from 5
			PRI_Offset = ((intNum % 4) *8 ) + 5;
		
		  GET_HWREG (NVIC_PRI_BASE_ADDRESS, PRI_Num) |= ((u32)locGroupingField << PRI_Offset);

	/*TODO : Enable\Disable based on user configurations in NVIC_ENx and SCB_Sys Registers */
    
    //Enable Interrupt in the coreesponding Register
    //We subtract 32 & Multiples of 32 because every Regsiter starts from 0 

        if(intNum >= 0 && intNum <= 31){
            set_bit(NVIC_EN0_R, intNum);
        }
        else if(intNum >=32 && intNum <= 63){
            set_bit(NVIC_EN1_R, (intNum-32));
        }
        else if(intNum >=64 && intNum <= 95){
            set_bit(NVIC_EN2_R, (intNum-64));
        }
        else if(intNum >=96 && intNum <= 127){
            set_bit(NVIC_EN3_R, (intNum-96));
        }
        else if(intNum >=128 && intNum <= 138){
            set_bit(NVIC_EN1_R, (intNum-128));
        }

       
        
    
    
    
    
    }

}

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.c
 *********************************************************************************************************************/

