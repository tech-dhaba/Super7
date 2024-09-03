#include <avr/io.h>
#include <util/delay.h>

#define BAUD 9600
#define MYUBRR F_CPU/16/BAUD-1

void USART_Init(unsigned int ubrr) {
    // Set baud rate
    UBRR0H = (unsigned char)(ubrr>>8);
    UBRR0L = (unsigned char)ubrr;
    
    // Enable transmitter
    UCSR0B = (1<<TXEN0);
    
    // Set frame format: 8 data bits, 1 stop bit
    UCSR0C = (1<<UCSZ01) | (1<<UCSZ00);
}

void USART_Transmit(unsigned char data) {
    // Wait for empty transmit buffer
    while (!(UCSR0A & (1<<UDRE0)));
    
    // Put data into buffer, sends the data
    UDR0 = data;
}

void ADC_Init() {
    // Select Vref=AVcc with external capacitor at AREF pin
    ADMUX = (1<<REFS0);
    
    // Set prescaler to 128 and enable ADC
    ADCSRA = (1<<ADEN) | (7<<ADPS0);
}

uint16_t ADC_Read(uint8_t ch) {
    // Select ADC channel ch must be 0-7
    ch &= 0b00000111;
    ADMUX = (ADMUX & 0xF8) | ch;
    
    // Start single conversion
    ADCSRA |= (1<<ADSC);
    
    // Wait for conversion to complete
    while (ADCSRA & (1<<ADSC));
    
    return (ADC);
}

int main() {
    USART_Init(MYUBRR);
    ADC_Init();
    
    while (1) {
        uint16_t adc_value = ADC_Read(0); // Read ADC value from channel 0
        USART_Transmit(adc_value >> 8);   // Transmit high byte
        USART_Transmit(adc_value & 0xFF); // Transmit low byte
        
        _delay_ms(500); // Adjust the delay as needed
    }
}

