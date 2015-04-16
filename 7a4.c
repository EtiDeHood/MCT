 #include <XC888CLM.H>
 sbit Taster=0xA0;
 
 void entprellen();
 void main(void)
 {
 unsigned char s=0;
 const unsigned char Stati[]={0x81, 0x42, 0x24, 0x18, 0x24, 0x42};
 P2_DIR=0x00;
 P3_DIR=0xFF;
 P3_DATA=0x00;

 

  while(1){
  		if(Taster==1){
		  if(s==5){s=0;}
		  else{s++;}
		  entprellen;
		  

		}
		else{;}
		P3_DATA=Stati[s];
 		while(Taster==1){;}
   }

 }

 void entprellen(){
  unsigned int i=0, j=0;
  for(i=0x20; i>0; i--){
   for(j=0xFF; j>0; j--){;}
  }
 }
