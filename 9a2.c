#include <XC888CLM.H>



void main(void)
{

unsigned char zaehler_ueberlauf = 0;

P3_DIR=0xFF;
P3_DATA=0;

TMOD = 1;
TCON = 0x10;
while (1)
{
 while(TFO == 0){;}
 TF0= 0;
 TL0 = 0xA0;
 TH0 = 0x15;
 zaehler_ueberlauf ++;
 
 if(zaehler_ueberlauf == 200)
 {
   zaehler_ueberlauf = 0;
   P3_DATA ++;
 }
 
  
}

}
