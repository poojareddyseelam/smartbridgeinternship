
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
TCCR2=(1<<WGM20)|(1<<WGM21)|(1<<COM21)|(1<<CS20);
}


int main()
{
	DDRA=0X00;//inputs
    DDRB=0XFF;
	DDRD=0XFF;
	PWM_init();
	while (1)
	{
		PORTB=0X00;
		PORTD=0X00;
		PORTB=(1<<PB3);
		   if ((PINA &(1<<PA0))==0)
		    {
		    	OCR0=150;
				PORTD=(0<<PD7);
			}
		   if ((PINA &(1<<PA1))==0)
		    {
		    	OCR0=200;
				PORTD=(0<<PD7);
				
		    }
			PORTD=(1<<PD7);
		 if ((PINA &(1<<PA2))==0)
			   {
				   OCR2=150;
				   PORTB=(0<<PB3);
			   }
			   if ((PINA &(1<<PA3))==0)
			   {
				   OCR2=200;
				    PORTB=(0<<PB3);
			   }
	 }
	}


