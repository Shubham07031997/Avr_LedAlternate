#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>

void main()
{
  DDRD=0XFF;
  while(1)
  {
    PORTD=0X55;
	_delay_ms(200);
	PORTD=0XAA;
	_delay_ms(200);
   }

}
