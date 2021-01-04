#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("*** Zam Maas Hesabi ***\n\n");
	
	float maas, yeniMaas;
	printf("Maasinizi girin: ");
	scanf("%f",&maas);
	
	yeniMaas = maas + maas * 12 / 100;
	printf("Yeni maasiniz: %f",yeniMaas);
	
	return 0;
}
