#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
        P1SEL &= ~0x00;
        P1DIR |= 0x00;

     while(1)
     {
        P1OUT ^= 0x00;
        __delay_cycles(1000000);
     }
	return 0;
}
