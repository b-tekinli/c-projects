#include<studio.h>

int main(){
	printf("KARENÝN ALANINI HESAPLAYAN PROGRAM\n\n");
	
	int kareninKenari;
	int alan,cevre;
	
	printf("Karenin bir kenarýnýn ölçüsünü giriniz: \n");
	scanf("%d", &kareninKenari);
	
	alan = kareninKenari * kareninKenari;
	cevre = kareninKenari * 4;
	printf("Karenin alaný: %d \n", alan);
	printf("Karenin çevresi: %d \n", cevre);
	
	return 0;
}
