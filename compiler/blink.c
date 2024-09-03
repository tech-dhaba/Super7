#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	//set PORTB5(Pin 13 on Arduino Uno) as output
	DDRB|=(1<<DDB5);
	//Set the input pin(let's use PortD2,Pin on Arduino Uno)
	DDRD&=~(1<<DDD2);//Set PortD2 as input
	
	while(1)
	{
		//check if the input pin is high
		if(PIND&(1<<PIND2))
		{
			//If high turn ON LED
			_delay_ms(2000);
			PORTB|=(1<<PORTB5);
		//	_delay_ms(2000);
		}
		else
		{
			//if low turn OFF
			PORTB&=~(1<<PORTB5);
		}
	}
	return 0;
}
