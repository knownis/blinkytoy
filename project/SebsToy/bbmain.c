#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"		/* for setPeriod */
#include "led.h"		/* for led_control() */
#include "switches.h"

int 
main() 
{
    //time
     switch_init();
     led_init();
      buzzer_init();
     
   //wd

    or_sr(0x18);		/* CPU off, GIE on */
}




