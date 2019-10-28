
#include <mega16.h>
#include <delay.h>



void main(void)
{
int delay = 300;
DDRA = 0x04;
//DDRD = 0x01;
PORTA = 0xff;
while (1)
      {
        if(PINA.0 == 0 ) {
            delay -= 40 ; 
            
        }
        if(PINA.1 == 0 ) {
            delay += 40 ; 
            
        }          
        PORTA.2 = !PORTA.2;
        delay_ms(delay);
      }
}
