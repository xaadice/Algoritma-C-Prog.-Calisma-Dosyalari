#include<stdio.h>

/*
	    *
	   **
	  ***
	 ****
	*****
*/

//þeklinde yýldýzlar ile üçgen yapalým

int main(){
	
	int satir_sayisi = 0;
	int yildiz_sayisi = 0;
	int bosluk_sayisi = 0;
	
	for(satir_sayisi=5; satir_sayisi>0; satir_sayisi--){
		
		for(bosluk_sayisi=satir_sayisi-1; bosluk_sayisi>0; bosluk_sayisi--){
			printf(" ");
		}
		
		for(yildiz_sayisi=satir_sayisi; yildiz_sayisi<=5; yildiz_sayisi++){
			printf("*");
		}
		
		printf("\n"); //satýr atlamak için
	}
	
	return 0;
}
