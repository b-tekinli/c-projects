<<<<<<< HEAD
 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, m, i, result1=0, result2=0, oneNum=0, doubleNum=0, average1, average2, r=0;			// kullanaca��m�z de�i�kenleri int t�r�nde tan�mlad�k.
	
	printf("2 tane pozitif tam sayi giriniz: ");												// kullan�c�dan 2 tane say� girmesini istedik.
	scanf("%d %d", &m, &n);
	
	
	if(n < m){																					// 2. say�n�n 1. say�dan b�y�k olmas� �art�n� belirledik.
		printf("\nHata! ilk girdiginiz sayi ikinci girdiginiz sayidan daha kucuk olmalidir.");
	}
	else if(n > m){																				// 2. say� 1. say�dan b�y�k oldu�unda �al��acak komutlar�n �art�n� belirledik.
		for(i=m; i<=n; i++){
			if(i % 2 == 0){																		// �ift say�lar� bulmak i�in ko�ul belirledik.
				doubleNum++;																	// �ift say�lar� 1 art�rarak devam ettirdik.
				result2 += i;																	// �ift say�lar�n toplam�n� ald�k.
				average2 = result2 / doubleNum;													// �ift say�lar�n oratalamas�n� hesaplad�k.
			}
			else{
				oneNum++;																		// tek say�lar� 1 art�rarak devam ettirdik.
				result1 += i;																	// tek say�lar�n toplam�n� ald�k.
				average1 = result1 / oneNum;													// tek say�lar�n oratalamas�n� hesaplad�k.
			}
		}
	}
	else{
		printf("Lutfen kurallara uygun giris yapiniz...");										// olas� durumlardan birini kontrol etmek i�in ekrana hata mesaj� yazd�rd�k.
	}
	
	
	r = result2 + result1;																		// �ift ve tek say�lar�n toplam�n� r de�i�kenine atad�k.
	printf("\nAradaki sayilarin toplami: %d\n", r);					// ekledi�im �zellik.			aradaki say�lar�n toplam�n� ekrana yazd�rd�k.
	
	
	printf("\nTek sayilarin toplami: %d\n", result1);											// tek say�lar�n toplam�n� ekrana yazd�rd�k.
	printf("\nTek sayilarin ortalamasi: %d\n", average1);										// tek say�lar�n ortalamas�n� ekrana yazd�rd�k.
	printf("\nCift sayilarin toplami: %d\n", result2);											// �ift say�lar�n toplam�n� ekrana yazd�rd�k.
	printf("\nCift sayilarin ortalamasi: %d\n", average2);										// �ift say�lar�n ortalamas�n� ekrana yazd�rd�k.
	
	
	return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, m, i, result1=0, result2=0, oneNum=0, doubleNum=0, r=0;									// kullanacağımız değişkenleri int türünde tanımladık.
	double average1, average2;
	
	printf("2 tane pozitif tam sayi giriniz: ");													// kullanıcıdan 2 tane sayı girmesini istedik.
	scanf("%d %d", &m, &n);
	
	if(n <= 0 || m <= 0){																			// kullanıcının negatif sayı girme olasılığına karşı durum belirledik.
		printf("\nLutfen pozitif tam sayi giriniz...");												// olası durumlardan birini kontrol etmek için ekrana hata mesajı yazdırdık.
	}
	else if(n < m){																					// 2. sayının 1. sayıdan büyük olması şartını belirledik.
		printf("\nHata! ilk girdiginiz sayi ikinci girdiginiz sayidan daha kucuk olmalidir.");
		
	}
	else if(n > m){																					// 2. sayı 1. sayıdan büyük olduğunda çalışacak komutların şartını belirledik.
		for(i=m; i<=n; i++){
			if(i % 2 == 0){																			// çift sayıları bulmak için koşul belirledik.
				doubleNum++;																		// çift sayıları 1 artırarak devam ettirdik.
				result2 += i;																		// çift sayıların toplamını aldık.
				average2 = result2 / doubleNum;														// çift sayıların oratalamasını hesapladık.
			}
			else{
				oneNum++;																			// tek sayıları 1 artırarak devam ettirdik.
				result1 += i;																		// tek sayıların toplamını aldık.
				average1 = result1 / oneNum;														// tek sayıların oratalamasını hesapladık.
			}
		}
			
		r = result2 + result1;																		// çift ve tek sayıların toplamını r değişkenine atadık.
		printf("\n\nAradaki sayilarin toplami: %d\n", r);											// aradaki sayıların toplamını ekrana yazdırdık.
			
			
		printf("\nTek sayilarin toplami: %d\n", result1);											// tek sayıların toplamını ekrana yazdırdık.
		printf("\nTek sayilarin ortalamasi: %.2f\n", average1);										// tek sayıların ortalamasını ekrana yazdırdık.
		printf("\nCift sayilarin toplami: %d\n", result2);											// çift sayıların toplamını ekrana yazdırdık.
		printf("\nCift sayilarin ortalamasi: %.2f\n", average2);									// çift sayıların ortalamasını ekrana yazdırdık.
	}
	
	return 0;
}
>>>>>>> 703df6667e28d8c3ecb6577238df651d220d2646
