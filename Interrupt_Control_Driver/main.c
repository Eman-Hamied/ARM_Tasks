#include "intCtrl_Cfg.h"
#include "intCtrl.h"
#include "Mcu_Hw.h"
#include "std_types.h"
#include "Utils.h"

int main(void)
{
 
	
	__asm("CPSIE f \n");
	
	// Switch User Mode
	__asm("MOV R5, #0x1");
    __asm("MSR control, R5");
	
	// Switch Privilege mode
	__asm("SVC 1 \n");
    IntCrtl_Init();
	
	while(1)
	{
		
		
	}
	
	
	return 0;

}

void SVC_Handler(void)
{
  __asm("MOV R5, #0x0");
  __asm("MSR control, R5");

}