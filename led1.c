#include<avr/io.h>
#include<util/delay.h>
#include<math.h>
void main()
{ int i;
DDRB=0b11111111;
while(1)
{ i=0; 
  while(i!=8)
  { PORTB=pow(2,i);
    _delay_ms(1000);
    i++;
  }
i=7;
  while(i!=-1)
  { PORTB=pow(2,i);
    _delay_ms(1000);
    i--;
  }
}
}
  
