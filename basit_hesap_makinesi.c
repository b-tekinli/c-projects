#include<studio.h>

int main(){
	printf("BASÝT HESAP MAKÝNESÝ\n\n");
	
	float sayi1, sayi2, sonuc;
	int islem;
	
	printf("Ýlk sayýyý giriniz: \n");
	scanf("%f", &sayi1);
	
	printf("2. sayýyý giriniz: \n");
	scanf("%f", &sayi2);
	
	printf("Ýþlemi giriniz (1->Toplama 2->Çýkarma 3->Çarpma 4->Bölme): \n");
	scanf("%d", &islem);
	
	if(islem == 1)
		sonuc = sayi1 + sayi2;
	else if(islem == 2)
		sonuc = sayi1 - sayi2;
	else if(islem == 3)
		sonuc = sayi1 * sayi2;
	else if(islem == 4)
		sonuc = sayi1 / sayi2;
		
	printf("Ýþlemin sonucu: %.2f", sonuc);
	
	return 0;
}
