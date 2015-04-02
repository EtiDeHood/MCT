#include <XC888CLM.h>

sbit TASTER_1 = 0xA0;

void main(void)
{  char zaehler=0;
	P3_DIR=0xFF;
	while(1)
	{
		if (TASTER_1)
			{
			while(TASTER_1 != 0){}	
			zaehler ++;
			}
			
		if(((zaehler%2)==0) & (zaehler != 0))
			{P3_DATA=0x0F;}
		else{P3_DATA=0x00;}
	}
  }
