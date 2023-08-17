#define F_CPU 8000000UL
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr\io.h>

int main(void)
{

    //connecting led on port B
    DDRB |= 1<<3;

    while(1)
    {
        _delay_ms(1000);
        PORTB ^= 1<<3; 

    }

    return 0;

}