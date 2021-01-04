#include <stdio.h>
#include <stdlib.h>

int main() {

	char Ad[15], Soyad[30], Yas[2], Sehir[13], Meslek[10];
	
	printf("Adiniz: ");
	scanf("%s",Ad);
	
	printf("Soyadiniz: ");
	scanf("%s",Soyad);
	
	printf("Yasiniz: ");
	scanf("%s",Yas);
	
	printf("Sehriniz: ");
	scanf("%s",Sehir);

	printf("Mesleginiz: ");
	scanf("%s\n",Meslek);
	
	printf("Adi: %s - Soyadi: %s\n",Ad,Soyad);
	printf("Yas: %s\n",Yas);
	printf("Sehir: %s\n",Sehir);
	printf("Meslek: %s\n",Meslek);
	
	return 0;
	
}
