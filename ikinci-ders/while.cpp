#include<stdio.h>

int main() {
	
	int a=5;
	int b=3;
	int c=0;
	
	//While koþulumuz doðru ise kodumuz çalýþýr
	while(a>0){
		printf("%d ", a);
		a--;
	}
	
		printf("\n");
	
	//While koþulumuz yanlýþ ise kodumuz çalýþmaz
	while(b<0){
		printf("%d ", b);
		b++;
	}
	
		printf("\n");
	
	//Ayýný þekilde While koþulumuz doðru ise kodumuz çalýþýr
	while(c==0){
		printf("%d ", c);
		c--;
	}
	
	return 0;
}
