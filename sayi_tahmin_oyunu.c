#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	srand(time(NULL));
	int rastgeleSayi = (rand()%10)+1;
	int tahmin, kacDefa = 1;
		
	printf("Say� Tahmin Oyunu \n\n");
	
	printf("%d", rastgeleSayi);
	printf("L�tfen tahmininizi giriniz: \n");
	scanf("%d", &tahmin);
	
	while(rastgeleSayi != tahmin){
		kacDefa++;
		if(tahmin > rastgeleSayi)
		{
			printf("Tahmini d���r�n. \n");
			scanf("%d", &tahmin);
		}
		else if(tahmin < rastgeleSayi)
		{
			printf("Tahmini artt�r�n. \n");
			scanf("%d", &tahmin);
		}
	}
	printf("%d defa deneyerek, do�ru cevab� buldunuz.", kacDefa);
	return 0;
}
