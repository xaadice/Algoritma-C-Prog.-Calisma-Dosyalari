#include<stdio.h>

//fonksiyonumuzla geri dönüþ saðlayabiliriz, içeride yazdýrma iþlemi gibi bir çok iþlemde yapýlabilir
//fakat return deðeri ne ise eþitlenen deðere o deðer aktarýlýr
int cikarma(int a, int b){
	int sonuc = a - b;
	
	//alttaki kodu yorum satýrýndan kaldýrýp deneyin
	//printf("degere esitlemeden kullandik \n");
	
	return sonuc;
}

int toplama(int a, int b){	
	int sonuc = a + b;
	
	//alttaki kodu yorum satýrýndan kaldýrýp deneyin
	//printf("degere esitleyip kullandik \n");
	
	return sonuc;
}

//deðiþken kullanmadan direkt dönüþ saðlayabiliriz
int carpma(int a, int b){
	return (a*b);
}

int main() {
		
	//yazdýrma iþlemi olmadýðý için hiçbir iþlem yapmayacaktýr.
	cikarma(8, 1);
		printf("\n\n");
		
	//fakat yukarýdaki iþlemi bir deðere eþitleyerek kullanabiliriz
	int toplamaCevap = toplama(3, 8);
	printf("Toplama: %d", toplamaCevap);
		printf("\n\n");
			
	//veya printf içerisinde diret bu þekilde de kullanýlabilir fonksiyonun deðerini unutmayalým %d, %f...
	printf("Carpma: %d", carpma(3, 7));
	
	return 0;
}
