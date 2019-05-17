 
#ifndef F_CPU
#define F_CPU 16000000ul
#endif
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRC=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTC=0X55;
		_delay_ms(50);
        PORTC=0X00;
		_delay_ms(50);
		
		
    }
}

