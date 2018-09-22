#include <msp430.h> 
/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1DIR =  BIT0;
    P1OUT =  BIT1;
    P1REN =  BIT1;

    while(1)
    {
        if(P1IN & BIT1) != BIT1)
        {
            P1OUT ^= 0x01; //blinks the LED
            __delay_cycles(800000);
        }
        else{
            P1OUT &= ~(BIT0);
        }
    }
    return 0;
}
