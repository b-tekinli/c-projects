#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, m, i, result1=0, result2=0, oneNum=0, doubleNum=0, r=0;									// kullanacağımız değişkenleri int türünde tanımladık.
	double average1, average2;
	
	printf("2 tane pozitif tam sayi giriniz: ");													// kullanıcıdan 2 tane sayı girmesini istedik.
	scanf("%d %d", &m, &n);
	
	
	if(n < m){																						// 2. sayının 1. sayıdan büyük olması şartını belirledik.
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
	else if(n <= 0 || m <= 0){
		printf("Lutfen pozitif tam sayi giriniz...");										     	// olası durumlardan birini kontrol etmek için ekrana hata mesajı yazdırdık.
	}
	
	return 0;
}
