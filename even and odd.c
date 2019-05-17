#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
# include <util/delay.h>
int main(void)
{
    	DDRB=0XFF;
		while(1)    {
		PORTB=0X55;
		_delay_ms(3000);
		PORTB=0X00;
    }
}

