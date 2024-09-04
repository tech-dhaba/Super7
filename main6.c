#include<avr/io.h>
#define F_CPU 16000000UL//define
#include<util/delays.h>
int main(void){
DDRA|=(1<<DDA5);//SET A0 as output
DDRB|=(1<<DDB4);//SET B0 as output
while(1){
PORTA!=(1<<PORTA5);
PORTB&=~(1<<PORTB4);
if(1){
PORTA^=(PORTB);
PORTB^=(PORTA);


}



}








}
