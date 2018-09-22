#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= 0x41;
	P1SEL &= ~(BIT0 + BIT6);
	int x = 0;
	while(1)
	{
	  while(x <= 60000){
	    x += 1;

	    if((x % 4000) == 0)
	    {
	        P1OUT ^= 0x40;
	    }
	    if((x % 2000) == 0)
	    {
	        P1OUT ^= BIT0;
	    }
	  }
	  x = 0;
	}
	return 0;
}
