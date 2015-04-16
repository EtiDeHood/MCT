 #include <XC888CLM.H>
 
 sbit TasterL=0xA0;
 sbit TasterR=0xA1;
 void entprellen();
 void main(void)
 {
 unsigned char z=1;
 P2_DIR=0x00;
 P3_DIR=0xFF;
 P3_DATA=0x00;

 

  while(1){
  	if(TasterL==1){
		if(z==0x80){z=1;}
		else{z= z<<1;}
		entprellen;
		
		}
	else if (TasterR==1){
		if(z==0x01){z=0x80;}
		else{z= z>>1;}
		entprellen;
		
		}
	else{;}


	P3_DATA=z;
	while(TasterL==1||TasterR==1){;}
  }

 }

 void entprellen(){
  unsigned int i=0, j=0;
  for(i=0x20; i>0; i--){
   for(j=0xFF; j>0; j--){;}
  }
 }
