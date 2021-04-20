#include <stdio.h>
#include <stdlib.h>


double addOperation(double num1, double num2){							// toplama iþlemi fonksiyonu
	return num1 + num2;
}



double extrOperation(double num1, double num2){							// çýkarma iþlemi fonksiyonu
	return num1 - num2;
}



double multOperation(double num1, double num2){							// çarpma iþlemi fonksiyonu
	return num1 * num2;
}



double divOperation(double num1, double num2){							// bölme iþlemi fonksiyonu
	return num1 / num2;
}



double expOperation(double num1, double num2){							// üs alma iþlemi fonksiyonu              BENÝM EKLEDÝÐÝM ÖZELLÝK
	
	int result = 1, i;

	for(i=1; i<=num2; i++){											   // sayýnýn üs kadar tekrarlanmasýný saðladýk.
		result *= num1;
	}
	
	return result;
}



int main(int argc, char *argv[]) {
	
	
	printf("HESAP MAKINESI\n");
	
	
	char menuSelect;											   	   // menü için fonksiyon tanýmladýk.
	double n1, n2;
	printf("\n(+)Toplama\n(-)Cikarma\n(*)Carpma\n(/)Bolme\n(^)Us Alma\n(D)Dur\nLutfen yapmak istediginiz islemi seciniz: ");
	scanf("%c", &menuSelect);
	
	
	switch(menuSelect){
		case '+':													  // toplama iþlemi sembolü için belirttiðimiz case'e girmesini saðladýk.
			printf("2 sayi giriniz: ");								  // kullanýcýdan iþlem için 2 sayý istedik.
			scanf("%lf %lf", &n1, &n2);
			printf("Sonuc: %.2f", addOperation(n1, n2));		      // fonksiyon ile iþlem sonucu buraya döndürdük. 
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
			printf("Programi durdurdunuz.");							// kullanýcý programý durdurduðunda ekrana verilecek mesajý belirttik.
			break;														// programdan çýkmak için break deyimiyle kýrdýk.
			
		default:														// kullanýcý hiçbir iþlem seçmediðinde çalýþacak komut.
			printf("Lutfen bir secim yaparak tekrar deneyiniz...");
			break;
	}
	
	return 0;
}
