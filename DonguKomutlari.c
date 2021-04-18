 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, m, i, result1=0, result2=0, oneNum=0, doubleNum=0, average1, average2, r=0;			// kullanacaðýmýz deðiþkenleri int türünde tanýmladýk.
	
	printf("2 tane pozitif tam sayi giriniz: ");												// kullanýcýdan 2 tane sayý girmesini istedik.
	scanf("%d %d", &m, &n);
	
	
	if(n < m){																					// 2. sayýnýn 1. sayýdan büyük olmasý þartýný belirledik.
		printf("\nHata! ilk girdiginiz sayi ikinci girdiginiz sayidan daha kucuk olmalidir.");
	}
	else if(n > m){																				// 2. sayý 1. sayýdan büyük olduðunda çalýþacak komutlarýn þartýný belirledik.
		for(i=m; i<=n; i++){
			if(i % 2 == 0){																		// çift sayýlarý bulmak için koþul belirledik.
				doubleNum++;																	// çift sayýlarý 1 artýrarak devam ettirdik.
				result2 += i;																	// çift sayýlarýn toplamýný aldýk.
				average2 = result2 / doubleNum;													// çift sayýlarýn oratalamasýný hesapladýk.
			}
			else{
				oneNum++;																		// tek sayýlarý 1 artýrarak devam ettirdik.
				result1 += i;																	// tek sayýlarýn toplamýný aldýk.
				average1 = result1 / oneNum;													// tek sayýlarýn oratalamasýný hesapladýk.
			}
		}
	}
	else{
		printf("Lutfen kurallara uygun giris yapiniz...");										// olasý durumlardan birini kontrol etmek için ekrana hata mesajý yazdýrdýk.
	}
	
	
	r = result2 + result1;																		// çift ve tek sayýlarýn toplamýný r deðiþkenine atadýk.
	printf("\nAradaki sayilarin toplami: %d\n", r);					// eklediðim özellik.			aradaki sayýlarýn toplamýný ekrana yazdýrdýk.
	
	
	printf("\nTek sayilarin toplami: %d\n", result1);											// tek sayýlarýn toplamýný ekrana yazdýrdýk.
	printf("\nTek sayilarin ortalamasi: %d\n", average1);										// tek sayýlarýn ortalamasýný ekrana yazdýrdýk.
	printf("\nCift sayilarin toplami: %d\n", result2);											// çift sayýlarýn toplamýný ekrana yazdýrdýk.
	printf("\nCift sayilarin ortalamasi: %d\n", average2);										// çift sayýlarýn ortalamasýný ekrana yazdýrdýk.
	
	
	return 0;
}
