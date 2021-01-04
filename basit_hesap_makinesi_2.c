#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi1, sayi2, toplam, fark, carp, bol;
	
	printf("Sayi girin: ");
	scanf("%d",&sayi1);
	
	printf("Sayi girin: ");
	scanf("%d",&sayi2);
	
	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carp = sayi1 * sayi2;
	bol = sayi1 / sayi2;
	
	printf("Toplam = %d\n",toplam);
	printf("Fark = %d\n",fark);
	printf("Carpim = %d\n",carp);
	printf("Bolum = %d\n",bol);

	return 0;
}
