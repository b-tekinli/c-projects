#include<studio.h>

int main(){
	printf("BAS�T HESAP MAK�NES�\n\n");
	
	float sayi1, sayi2, sonuc;
	int islem;
	
	printf("�lk say�y� giriniz: \n");
	scanf("%f", &sayi1);
	
	printf("2. say�y� giriniz: \n");
	scanf("%f", &sayi2);
	
	printf("��lemi giriniz (1->Toplama 2->��karma 3->�arpma 4->B�lme): \n");
	scanf("%d", &islem);
	
	if(islem == 1)
		sonuc = sayi1 + sayi2;
	else if(islem == 2)
		sonuc = sayi1 - sayi2;
	else if(islem == 3)
		sonuc = sayi1 * sayi2;
	else if(islem == 4)
		sonuc = sayi1 / sayi2;
		
	printf("��lemin sonucu: %.2f", sonuc);
	
	return 0;
}
