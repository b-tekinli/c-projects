#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	srand(time(NULL));
	int rastgeleSayi = (rand()%10)+1;
	int tahmin, kacDefa = 1;
		
	printf("Sayý Tahmin Oyunu \n\n");
	
	printf("%d", rastgeleSayi);
	printf("Lütfen tahmininizi giriniz: \n");
	scanf("%d", &tahmin);
	
	while(rastgeleSayi != tahmin){
		kacDefa++;
		if(tahmin > rastgeleSayi)
		{
			printf("Tahmini düþürün. \n");
			scanf("%d", &tahmin);
		}
		else if(tahmin < rastgeleSayi)
		{
			printf("Tahmini arttýrýn. \n");
			scanf("%d", &tahmin);
		}
	}
	printf("%d defa deneyerek, doðru cevabý buldunuz.", kacDefa);
	return 0;
}
