#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char ad[15];
	printf("Adiniz: ");
	scanf("%s",ad);
	
	char liste[45];
	printf("Su: 1 TL\nMisir: 5 TL\nKola: 3 TL\nBilet: 8 TL\n");
	
	int su, misir, kola, bilet, ucret;
	
	printf("Su adedi = ");
	scanf("%d",&su);
	
	printf("Misir adedi = ");
	scanf("%d",&misir);
	
	printf("Kola adedi = ");
	scanf("%d",&kola);
	
	printf("Bilet adedi = ");
	scanf("%d",&bilet);

	ucret = (su * 1) + (misir * 5) + (kola * 3) + (bilet * 8);
	printf("Toplam ucret = %d TL",ucret);
	
	return 0;
	
}
