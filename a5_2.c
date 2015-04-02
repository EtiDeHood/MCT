#include <XC888CLM.h>

sbit TASTER_1 = 0xA0;

void main(void)
{
	P3_DIR=0xFF;
	while(1)
	{
		if (TASTER_1)
			{P3_DATA=0xFF;}
		else
			  {P3_DATA=0x00;}
	}
}
