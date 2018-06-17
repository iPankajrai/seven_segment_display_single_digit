unsigned int val[10]= {0x3, 0x9f,0x25, 0xd, 0x99, 0x49, 0x41, 0x1f, 0x1, 0x9};
#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
void main()
{  
  DDRB= 0xff;
  DDRA= 0xff;
   while(1)
  {
	 for (int j=0; j<10; j++)
	 { 
	    PORTB= val[j];
	 for(int i=0; i<10; i++)
	   { 
	    PORTA= val[i];
		_delay_ms(1000);
       }
     }
   }
}
