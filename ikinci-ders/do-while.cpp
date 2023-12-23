#include<stdio.h>

int main() {
	
	int a=7;
	int b=3;
	int c=5;
	
	//do while'da ise koþulumuz yanlýþ olsa bile do içerisindeki kodumuz en az bir kere çalýþýr
	
	//Koþulumuz doðru olduðu sürece çalýþacak
	do{
		printf("%d ", a);
		a--;
	}while(a>0);
	
		printf("\n");
	
	//Koþulumuz yanlýþ fakat en az bir kere çalýþýyor
	do{
		printf("%d ", b);
		b++;
	}while(b<0);
	
		printf("\n");
	
	//Koþulumuz yanlýþ fakat en az bir kere çalýþýyor ve ardýndan c 1 azaltýlýyor 
	//ardýndan koþulumuz doðru olduðu için tekrardan çalýþmak durumunda kalýyor
	do{
		printf("%d ", c);
		c--;
	}while(c==4);
	

	return 0;
}
