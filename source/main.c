#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as out
unsigned char temp_input = 0x00;
while(1) {
	temp_input = PINA;
	PORTB = temp_input;
}
return 1;
}
