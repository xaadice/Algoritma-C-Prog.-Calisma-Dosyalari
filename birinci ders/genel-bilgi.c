#include<stdio.h> //C dilinde standart giriþ/çýkýþ iþlemlerini saðlayan stdio kütüphanesini programa ekler.
#define MAX 50 	  //MAX isimli deðiþkene 50 deðerini atar ve program içerisinde "MAX" ile kullanabiliriz

//Program yapýmýz:
int main() {
	
	//Tanýmlama ifadeleri:
	int a = 3; //Tam sayýlar
	float b = 3.14; //Kesirli Sayýlar
	double c = 6.73; //Kesirli Sayýlar
	
	char karakter = 'A'; //Karakter
	char str[MAX] = "Ali"; //MAX deðeri uzunluðunda string ifade tutmak
	
	
	
		
	//Yazdýrma Ýþlemi
	printf("Hello World:) \n");
	
	/*
		\n alt satýra inmek için
		\t bir "TAB" bosluk býrakmak için
	*/
	
	//Deðiþkenleri Yazdýrma
	printf("%d \n", a); //int deðerler için "%d"
	printf("%f \n", b); //float deðerler için "%f"
	printf("%.2f \n", b); //deðerlerin virgülden sonra kaç basamakla görüneceðini sýnýrlamak için için "%.2f","%.1f" þeklinde kullanýlur 
	printf("%f \n", c); //double deðerler için "%f"
	
	printf("%c \n", karakter); //char deðerler için "%c"
	printf("%s \n", str); //string deðerler için "%s"
	
	
	
	
	//Veri alma iþlemi
	//Deðiþkenleri yazdýrýrken kullandýðýmýz "%..." ifadesi ile ','den sonra &degisken_adi þeklinde kullanýlýr
	
	int veri1 = 0;
	
	printf("Lutfen bir sayi giriniz: "); //Kullanýcýya bilgi verelim
	scanf("%d", &veri1); //Ýnt olduðu için %d ve ','den sonra &veri1 ile deðiþkenimizi kullanýcýdan aldýk
	
	printf("Girdiðiniz sayi %d", veri1); //Þeklinde veriyi kontrol edelim:) 
	
	
	
	
	//Matematiksel iþlemler
	/*
		a++;		// a deðeri (a+1) deðerine eþitlenir
		a--;		// a deðeri (a-1) deðerine eþitlenir
		a = a+5;   	// a deðeri (a+5) deðerine eþitlenir
		a = b + c; 	// a deðeri (b+c) deðerine eþitlenir
		
		a = b/c;	// a degeri (b/c) deðerine eþitlenir (c 0'dan farklý olmak üzere)
		a = a*17;	// a degeri (a*17) deðerine eþitlenir
	*/
		
	return 0;
}
