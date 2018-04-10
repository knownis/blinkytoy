#ifndef switches_included
#define switches_included

#define SW1 BIT0 //p2.0
#define SW2 BIT1 //p2.1
#define SW3 BIT2 //p2.2
#define SW4 BIT3 //p2.3
#define SWITCHES (SW1|SW2|SW3|SW4)

void switch_init();
void switch_interrupt_handler();

extern char switch_state_down, switch_state_changed,switch2_state_down,switch3_state_down; /* effectively boolean */

#endif // included
