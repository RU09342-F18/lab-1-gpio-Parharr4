#include "msp.h"


/**
 * main.c
 */
void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;      // stop watchdog timer

    P1DIR |= 0x01;
    P2DIR |= 0x02;

    int x = 0;
    while(1)
    {
      while(x <= 600000){
        x += 1;

        if((x % 40000) == 0)
        {
            P2OUT ^= 0x02;
        }
        if((x % 20000) == 0)
        {
            P1OUT ^= BIT0;
        }
      }
      x = 0;
    }
}
