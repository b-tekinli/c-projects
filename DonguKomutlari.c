<<<<<<< HEAD
 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, m, i, result1=0, result2=0, oneNum=0, doubleNum=0, average1, average2, r=0;			// kullanacağımız değişkenleri int türünde tanımladık.
	
	printf("2 tane pozitif tam sayi giriniz: ");												// kullanıcıdan 2 tane sayı girmesini istedik.
	scanf("%d %d", &m, &n);
	
	
	if(n < m){																					// 2. sayının 1. sayıdan büyük olması şartını belirledik.
		printf("\nHata! ilk girdiginiz sayi ikinci girdiginiz sayidan daha kucuk olmalidir.");
	}
	else if(n > m){																				// 2. sayı 1. sayıdan büyük olduğunda çalışacak komutların şartını belirledik.
		for(i=m; i<=n; i++){
			if(i % 2 == 0){																		// çift sayıları bulmak için koşul belirledik.
				doubleNum++;																	// çift sayıları 1 artırarak devam ettirdik.
				result2 += i;																	// çift sayıların toplamını aldık.
				average2 = result2 / doubleNum;													// çift sayıların oratalamasını hesapladık.
			}
			else{
				oneNum++;																		// tek sayıları 1 artırarak devam ettirdik.
				result1 += i;																	// tek sayıların toplamını aldık.
				average1 = result1 / oneNum;													// tek sayıların oratalamasını hesapladık.
			}
		}
	}
	else{
		printf("Lutfen kurallara uygun giris yapiniz...");										// olası durumlardan birini kontrol etmek için ekrana hata mesajı yazdırdık.
	}
	
	
	r = result2 + result1;																		// çift ve tek sayıların toplamını r değişkenine atadık.
	printf("\nAradaki sayilarin toplami: %d\n", r);					// eklediğim özellik.			aradaki sayıların toplamını ekrana yazdırdık.
	
	
	printf("\nTek sayilarin toplami: %d\n", result1);											// tek sayıların toplamını ekrana yazdırdık.
	printf("\nTek sayilarin ortalamasi: %d\n", average1);										// tek sayıların ortalamasını ekrana yazdırdık.
	printf("\nCift sayilarin toplami: %d\n", result2);											// çift sayıların toplamını ekrana yazdırdık.
	printf("\nCift sayilarin ortalamasi: %d\n", average2);										// çift sayıların ortalamasını ekrana yazdırdık.
	
	
	return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, m, i, result1=0, result2=0, oneNum=0, doubleNum=0, r=0;									// kullanacaÄŸÄ±mÄ±z deÄŸiÅŸkenleri int tÃ¼rÃ¼nde tanÄ±mladÄ±k.
	double average1, average2;
	
	printf("2 tane pozitif tam sayi giriniz: ");													// kullanÄ±cÄ±dan 2 tane sayÄ± girmesini istedik.
	scanf("%d %d", &m, &n);
	
	if(n <= 0 || m <= 0){																			// kullanÄ±cÄ±nÄ±n negatif sayÄ± girme olasÄ±lÄ±ÄŸÄ±na karÅŸÄ± durum belirledik.
		printf("\nLutfen pozitif tam sayi giriniz...");												// olasÄ± durumlardan birini kontrol etmek iÃ§in ekrana hata mesajÄ± yazdÄ±rdÄ±k.
	}
	else if(n < m){																					// 2. sayÄ±nÄ±n 1. sayÄ±dan bÃ¼yÃ¼k olmasÄ± ÅŸartÄ±nÄ± belirledik.
		printf("\nHata! ilk girdiginiz sayi ikinci girdiginiz sayidan daha kucuk olmalidir.");
		
	}
	else if(n > m){																					// 2. sayÄ± 1. sayÄ±dan bÃ¼yÃ¼k olduÄŸunda Ã§alÄ±ÅŸacak komutlarÄ±n ÅŸartÄ±nÄ± belirledik.
		for(i=m; i<=n; i++){
			if(i % 2 == 0){																			// Ã§ift sayÄ±larÄ± bulmak iÃ§in koÅŸul belirledik.
				doubleNum++;																		// Ã§ift sayÄ±larÄ± 1 artÄ±rarak devam ettirdik.
				result2 += i;																		// Ã§ift sayÄ±larÄ±n toplamÄ±nÄ± aldÄ±k.
				average2 = result2 / doubleNum;														// Ã§ift sayÄ±larÄ±n oratalamasÄ±nÄ± hesapladÄ±k.
			}
			else{
				oneNum++;																			// tek sayÄ±larÄ± 1 artÄ±rarak devam ettirdik.
				result1 += i;																		// tek sayÄ±larÄ±n toplamÄ±nÄ± aldÄ±k.
				average1 = result1 / oneNum;														// tek sayÄ±larÄ±n oratalamasÄ±nÄ± hesapladÄ±k.
			}
		}
			
		r = result2 + result1;																		// Ã§ift ve tek sayÄ±larÄ±n toplamÄ±nÄ± r deÄŸiÅŸkenine atadÄ±k.
		printf("\n\nAradaki sayilarin toplami: %d\n", r);											// aradaki sayÄ±larÄ±n toplamÄ±nÄ± ekrana yazdÄ±rdÄ±k.
			
			
		printf("\nTek sayilarin toplami: %d\n", result1);											// tek sayÄ±larÄ±n toplamÄ±nÄ± ekrana yazdÄ±rdÄ±k.
		printf("\nTek sayilarin ortalamasi: %.2f\n", average1);										// tek sayÄ±larÄ±n ortalamasÄ±nÄ± ekrana yazdÄ±rdÄ±k.
		printf("\nCift sayilarin toplami: %d\n", result2);											// Ã§ift sayÄ±larÄ±n toplamÄ±nÄ± ekrana yazdÄ±rdÄ±k.
		printf("\nCift sayilarin ortalamasi: %.2f\n", average2);									// Ã§ift sayÄ±larÄ±n ortalamasÄ±nÄ± ekrana yazdÄ±rdÄ±k.
	}
	
	return 0;
}
>>>>>>> 703df6667e28d8c3ecb6577238df651d220d2646
