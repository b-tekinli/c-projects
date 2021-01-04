#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char kitapAdi[30];
	printf("Kitabin adini giriniz: ");
	scanf("%s",kitapAdi);
	
	char yazarAdi[35];
	printf("Yazarin adini giriniz: ");
	scanf("%s",yazarAdi);
	
	
	char sayfaSayisi[4];
	printf("Sayfa sayisini giriniz: ");
	scanf("%s",sayfaSayisi);
	
	
	char basimTarihi[8];
	printf("Basim tarihini giriniz: ");
	scanf("%s",basimTarihi);
	
	
	char basimEvi[50];
	printf("Basim evini giriniz: ");
	scanf("%s",basimEvi);
	
	
	char tur[15];
	printf("Turunu giriniz: ");
	scanf("%s\n",tur);
	
	
	printf("Girmis oldugunuz kitap: %s\n",kitapAdi);
	printf("Girmis oldugunuz yazar: %s\n",yazarAdi);
	printf("Girmis oldugunuz sayfa sayisi: %s\n",sayfaSayisi);
	printf("Girmis oldugunuz basim tarihi: %s\n",basimTarihi);
	printf("Girmis oldugunuz basim evi: %s\n",basimEvi);
	printf("Girmis oldugunuz tur: %s\n",tur);
	
	return 0;
	
}
