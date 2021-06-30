#include "Mcu_Hw.h"
#include "mcu.h"
#include "mcu_config.h"
#include "std_types.h"
#include "Utils.h"
#include <stdio.h>

extern const Mcu_Config Mcu_Config_Settings[];


int main(void)
{
  u32 pll_status;
	
	Mcu_InitClock(Mcu_Clock_0);
	
	pll_status = Mcu_DistributePllClock();
	
	
	while(1)
	{
		
		
	}
	
	
	
	return 0;
}

