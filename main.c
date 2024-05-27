/*
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  //pin config
DDRB = 0x02;
while(1)
{
   if((PINB & 0x08)== 0)
   {
	//High Signal - 1
    PORTB = 0x02;//0000 0010 LED On
    _delay_ms(1000);// Delay for 1 sec
   }
else{
    //Low signal - 0
   PORTB = 0x00;//0000 0000 LED OFF
_delay_ms(1000);// Delay for 1 sec
}
}
}
