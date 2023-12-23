#include<stdio.h>

int main() {
	
	float sayi_bir=0; 
	float sayi_iki=0;
	
	int secim = 0;
	
	float islem = 0;
	
	printf("Hesap Makinesi\n");
	printf("--------------\n");
	printf("1.Toplama \n2.Cikarma \n3.Carpma \n4.Bolme \n\n");	
	
	printf("Yapmak istediginiz islem: ");
	scanf("%d", &secim);
	
	printf("\n");
	
	switch(secim){
		
		//secim deðiþkenimiz hangi deðere eþitse o case çalýþacaktýr.
		
		case 1:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir+sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		case 2:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir-sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		case 3:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir*sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		case 4:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir/sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		//belirlediðimiz case'ler dýþýnda bir durum söz konusu olduðunda default çalýþýr
		default:
			printf("Hatali Giris!");
			break;
	}	
		
	
	return 0;
}
