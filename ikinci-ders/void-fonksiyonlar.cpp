#include<stdio.h>

//Dönüþsüz fonksiyonlar
void helloYaz() {
	printf("Hello");
}

void helloYazParametreli(char isim[20]) {
	printf("Hello %s:)", isim);
}

void toplama(int a, int b){
	printf("Toplam: %d", (a+b));
}

int main() {
	
	helloYaz();
		printf("\n\n");
		
	helloYazParametreli("alihappy");
		printf("\n\n");
		
	toplama(3, 8);
	
	return 0;
}
