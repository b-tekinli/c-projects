#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("Ogrenci Ortalama Hesaplama Sistemi\n\n");
	
	int s1,s2,ort;
	
	printf("1. sinav degerini giriniz: ");
	scanf("%d",&s1);
	
	printf("2. sinav degerini giriniz: ");
	scanf("%d",&s2);
	
	ort = (s1 + s2) / 2;
	
	printf("Ortalama = %d\n\n",ort);
	
	if(ort>=50)
	{
		printf("Tebrikler gectiniz :)");
	}
	else
	{
		printf("Maalesef kaldiniz :(");
	}

	return 0;
}
