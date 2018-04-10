#include <msp430.h>
#include "switches.h"
#include "song.h"
#include "buzzer.h"
#include "led.h"


char switch_state_down,switch2_state_down,switch3_state_down, switch_state_changed;
static char 
switch_update_interrupt_sense()
{
  char p2val = P2IN;
  /* update switch interrupt to detect changes from current buttons */
  P2IES |= (p2val & SWITCHES);	/* if switch up, sense down */
  P2IES &= (p2val | ~SWITCHES);	/* if switch down, sense up */
  return p2val;
}

void 
switch_init()			/* setup switch */
{  
  P2REN |= SWITCHES;		/* enables resistors for switches */
  P2IE = SWITCHES;		/* enable interrupts from switches */
  P2OUT |= SWITCHES;		/* pull-ups for switches */
  P2DIR &= ~SWITCHES;		/* set switches' bits for input */
  switch_update_interrupt_sense();
  switch_interrupt_handler();	/* to initially read the switches */
}


void
switch_interrupt_handler()
{
  char p2val = switch_update_interrupt_sense();
  
  if(!(p2val & SW1)){
    switch_state_changed = 1;
       
      picAsong(1);led_update();
}
else if (!(p2val & SW2)){
      switch_state_changed = 1; 
      switch2_state_down = 1;
    picAsong(2);
  led_update();
  switch2_state_down = 0;
}
else if (!(p2val & SW3)){
      switch_state_changed = 1; 
      switch3_state_down = 1;
    picAsong(3);
   led_update();
   switch3_state_down = 0;;
}
else if (!(p2val & SW4)){
   switch_state_changed = 1;  
    picAsong(4);
    led_update();


}

}
