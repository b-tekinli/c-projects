#include<studio.h>

int main(){
	printf("Pointer �le Aritmetik Ortalama Hesaplama \n\n");
	
	int sayilar[5],i;
	
	printf("L�tfen 5 tane de�er giriniz: \n");
	for(i = 0;i<5 i++){
		scanf("%d" &sayilar[i]);
	}
	ptr = &sayilar[0]; // sayilar
	
	for(j = 0; j<5; j++){
		toplam = toplam + ptr;
		ptr++;
	}
	sonuc = toplam / 5;
	printf("Girilen say�lar�n aritmetik ortalamas�: %d \n", sonuc);
	
	return 0;
}
