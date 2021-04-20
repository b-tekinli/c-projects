#include <stdio.h>
#include <stdlib.h>


double addOperation(double num1, double num2){							// toplama i�lemi fonksiyonu
	return num1 + num2;
}



double extrOperation(double num1, double num2){							// ��karma i�lemi fonksiyonu
	return num1 - num2;
}



double multOperation(double num1, double num2){							// �arpma i�lemi fonksiyonu
	return num1 * num2;
}



double divOperation(double num1, double num2){							// b�lme i�lemi fonksiyonu
	return num1 / num2;
}



double expOperation(double num1, double num2){							// �s alma i�lemi fonksiyonu              BEN�M EKLED���M �ZELL�K
	
	int result = 1, i;

	for(i=1; i<=num2; i++){											   // say�n�n �s kadar tekrarlanmas�n� sa�lad�k.
		result *= num1;
	}
	
	return result;
}



int main(int argc, char *argv[]) {
	
	
	printf("HESAP MAKINESI\n");
	
	
	char menuSelect;											   	   // men� i�in fonksiyon tan�mlad�k.
	double n1, n2;
	printf("\n(+)Toplama\n(-)Cikarma\n(*)Carpma\n(/)Bolme\n(^)Us Alma\n(D)Dur\nLutfen yapmak istediginiz islemi seciniz: ");
	scanf("%c", &menuSelect);
	
	
	switch(menuSelect){
		case '+':													  // toplama i�lemi sembol� i�in belirtti�imiz case'e girmesini sa�lad�k.
			printf("2 sayi giriniz: ");								  // kullan�c�dan i�lem i�in 2 say� istedik.
			scanf("%lf %lf", &n1, &n2);
			printf("Sonuc: %.2f", addOperation(n1, n2));		      // fonksiyon ile i�lem sonucu buraya d�nd�rd�k. 
			break;
			
		case '-':
			printf("2 sayi giriniz: ");
			scanf("%lf %lf", &n1, &n2);
			printf("Sonuc: %.2f", extrOperation(n1, n2));
			break;
			
		case '*':
			printf("2 sayi giriniz: ");
			scanf("%lf %lf", &n1, &n2);
			printf("Sonuc: %.2f", multOperation(n1, n2));
			break;
			
		case '/':
			printf("2 sayi giriniz: ");
			scanf("%lf %lf", &n1, &n2);
			printf("Sonuc: %.2f", divOperation(n1, n2));
			break;
			
		case '^':
			printf("2 sayi giriniz: ");
			scanf("%lf %lf", &n1, &n2);
			printf("Sonuc: %.2f", expOperation(n1, n2));
			break;
			
		case 'D':
			printf("Programi durdurdunuz.");							// kullan�c� program� durdurdu�unda ekrana verilecek mesaj� belirttik.
			break;														// programdan ��kmak i�in break deyimiyle k�rd�k.
			
		default:														// kullan�c� hi�bir i�lem se�medi�inde �al��acak komut.
			printf("Lutfen bir secim yaparak tekrar deneyiniz...");
			break;
	}
	
	return 0;
}
