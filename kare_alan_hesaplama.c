#include<studio.h>

int main(){
	printf("KAREN�N ALANINI HESAPLAYAN PROGRAM\n\n");
	
	int kareninKenari;
	int alan,cevre;
	
	printf("Karenin bir kenar�n�n �l��s�n� giriniz: \n");
	scanf("%d", &kareninKenari);
	
	alan = kareninKenari * kareninKenari;
	cevre = kareninKenari * 4;
	printf("Karenin alan�: %d \n", alan);
	printf("Karenin �evresi: %d \n", cevre);
	
	return 0;
}
