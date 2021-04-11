#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int aleyna, bilal, yagmur;
	int juri1, juri2, juri3, islem;
	
	printf("Yemek Yarismasina hosgeldiniz :)\n");
	
	printf("Juriler sadece 0-10 arasinda puan verebilir.\n");
	
	islem = printf("\n1.Yarismacilara puan ver\n2.Cikis");
	printf("\nIslem seciniz: ");
	scanf("%d", &islem);
	
	switch(islem){
		case 1:
			printf("\n1. jurinin 1. yarismaciya puani: ");
			scanf("%d", &juri1);
			
			printf("\n2. jurinin 1. yarismaciya puani: ");
			scanf("%d", &juri2);
			
			printf("\n3. jurinin 1. yarismaciya puani: ");
			scanf("%d", &juri3);
			
			aleyna = juri1 + juri2 + juri3;
			printf("\n\n1. yarismacinin toplam puani: %d", aleyna);

			printf("\n---------------------------------------\n");
			
			printf("\n1. jurinin 2. yarismaciya puani: ");
			scanf("%d", &juri1);
			
			printf("\n2. jurinin 2. yarismaciya puani: ");
			scanf("%d", &juri2);
			
			printf("\n3. jurinin 2. yarismaciya puani: ");
			scanf("%d", &juri3);
			
			bilal = juri1 + juri2 + juri3;
			printf("\n\n2. yarismacinin toplam puani: %d", bilal);

			printf("\n---------------------------------------\n");
			
			printf("\n1. jurinin 3. yarismaciya puani: ");
			scanf("%d", &juri1);
			
			printf("\n2. jurinin 3. yarismaciya puani: "); 
			scanf("%d", &juri2);
			
			printf("\n3. jurinin 3. yarismaciya puani: ");
			scanf("%d", &juri3);
			
			yagmur = juri1 + juri2 + juri3;
			printf("\n\n3. yarismacinin toplam puani: %d", yagmur);
			
			if (aleyna > bilal && aleyna > yagmur){
				printf("\n\nYarismayi kazanan kisi %d puanla Aleyna oldu. Tebrikler.", aleyna);
			}
			else if (bilal > aleyna && bilal > yagmur){
				printf("\n\nYarismayi kazanan kisi %d puanla Bilal oldu. Tebrikler.", bilal);
			}
			else{
				printf("\n\nYarismayi kazanan kisi %d puanla Yagmur oldu. Tebrikler.", yagmur);
			}
			break;			
		case 2:
			printf("\nCikis yaptiniz.");
			break;
		default:
			printf("Hatali giris yaptiniz.Lutfen tekrar deneyiniz...");
			break;
	}
	
	
	

	
	
	return 0;
}
