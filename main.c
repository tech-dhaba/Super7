#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // Set PORTB5 (pin 13 on Arduino Uno) as output
    DDRB |= (1 << DDB5);

    while (1) {
        // Toggle PORTB5
        PORTB ^= (1 << PORTB5);
        
        // Wait for 500 milliseconds
        _delay_ms(500);
    }
}
