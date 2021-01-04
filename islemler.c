#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi1, sayi2, topla, carp, fark, bol;
	
	sayi1 = 60;
	sayi2 = 3;
	
	topla = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carp = sayi1 * sayi2;
	bol = sayi1 / sayi2;
	
	printf("Toplam = %d\n",topla);
	printf("Fark = %d\n",fark);
	printf("Carp = %d\n",carp);
	printf("Bolum = %d\n",bol);
	
	return 0;
}
