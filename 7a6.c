#include <XC888CLM.H>
 sbit Taster1=0xA0;
 sbit Taster2=0xA1;
 unsigned char ZifferZuSegmentHex(unsigned char hexzahl);
 
 
 void entprellen();
 void main(void)
 {
	unsigned int x=0;
	unsigned char einser = 0;
	unsigned char zehner = 0;
	P1_DIR=0x00;
	P2_DIR = 0x00;
	P3_DIR = 0xFF;
	P3_DATA = 0x00;
	P4_DIR = 0xFF;
	
	P4_DATA = 0x00;
	P1_DATA	=0x00;

while(1){
	
	if(Taster1==1)
	{
		x++;
		if (x==99){x = 0;}
		else{x++;}
	}
	
	else if(Taster2==1)
		{
		if (x==0){x = 99;}
		else{x--;}
	}

	else{;}


	zehner= x/10;
	einser= x%10;

  // P3_DATA=(ZifferZuSegmentHex(zehner)) & 0x8F;
  P4_DATA=(ZifferZuSegmentHex(x))| 0x80;

   //entprellen();
   while(Taster1==1 || Taster2==1){;}

	


 }
 }

 void entprellen(){
  unsigned int i=0, j=0;
  for(i=0x20; i>0; i--){
   for(j=0xFF; j>0; j--){;}
  }
 }

 unsigned char ZifferZuSegmentHex(unsigned char hexzahl)
{
	unsigned char anzeige;
	if(hexzahl==0){anzeige=0xC0;}
	else if(hexzahl==1){anzeige=0xF9;}
	else if(hexzahl==2){anzeige=0xA4;}
	else if(hexzahl==3){anzeige=0xB0;}
	else if(hexzahl==4){anzeige=0x99;}
	else if(hexzahl==5){anzeige=0x92;}
	else if(hexzahl==6){anzeige=0x82;}
	else if(hexzahl==7){anzeige=0xF8;}
	else if(hexzahl==8){anzeige=0x80;}
	else if(hexzahl==9){anzeige=0x90;}
	else if(hexzahl==0xA){anzeige=0x88;}
	else if(hexzahl==0xB){anzeige=0x83;}
	else if(hexzahl==0xC){anzeige=0xC6;}
	else if(hexzahl==0xD){anzeige=0xA1;}
	else if(hexzahl==0xE){anzeige=0x86;}
	else if(hexzahl==0xF){anzeige=0x8E;}
	else {anzeige=0xFF;}

	return anzeige;
}
