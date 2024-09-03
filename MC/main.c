#include <avr/io.h>
#include<util/delay.h>
int main(void) {
    DDRB |= (1 << DDB5);

    DDRD &= ~(1 << 2);  // Set PORTD2 as input
    DDRD &= ~(1 << 7);  // Set PORTD2 as input

    while (1) {
	volatile unsigned char x=(PIND & (1<< 2))?1:0;
        if (x) {
            PORTB &= ~(1 << PORTB5);
            _delay_ms(1000);
	     PORTB |= (1 << PORTB5);
            _delay_ms(1000);
        } else {
            PORTB &= ~(1 << PORTB5);
        }
    }

    return 0;
}

