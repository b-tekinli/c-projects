#include<studio.h>

int main() {
	
	printf("KARENÝN ALANINI VE CEVRESINI HESAPLAYAN PROGRAM\n\n");
	
	int kareninKenari;
	int alan,cevre;
	
	printf("Karenin bir kenarinin olcusunu giriniz: \n");
	scanf("%d", &kareninKenari);
	
	alan = kareninKenari * kareninKenari;
	cevre = kareninKenari * 4;
	printf("Karenin alani: %d \n", alan);
	printf("Karenin cevresi: %d \n", cevre);
	
	return 0;
}
