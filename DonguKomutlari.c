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
