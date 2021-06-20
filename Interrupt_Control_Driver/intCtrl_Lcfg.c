
#include "intCtrl.h"
#include "std_types.h"

const IntCtrl_InterruptCfgType IntCtrl_InterruptCfg[NUM_OF_ACTIVATED_INTERRUPTS]=
{
	/*InterruptNum                 Interrupt_Group       InterruptSubGroup*/
	{GPIO_PORT_A,                   2,                    0},
	{UART_0,                        3,                    1}
	
};
