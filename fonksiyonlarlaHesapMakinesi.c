<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdlib.h>

int addOperation(int num1, int num2){											// toplama işlemi fonksiyonu
	return num1 + num2;
}



int extrOperation(int num1, int num2){											// çıkarma işlemi fonksiyonu
	return num1 - num2;
}



int multOperation(int num1, int num2){											// çarpma işlemi fonksiyonu
	return num1 * num2;
}



double divOperation(double num1, double num2){									// bölme işlemi fonksiyonu
	return num1 / num2;
}



int expOperation(int num1, int num2){											// üs alma işlemi fonksiyonu
	
	int result = 1, i;

	for(i=1; i<=num2; i++){											   			// sayının üs kadar tekrarlanmasını sağladık.
		result *= num1;
	}
	
	return result;
}


char menu(){																	// menü fonksiyonu tanımladık.
	printf("\n(+)Toplama\n(-)Cikarma\n(*)Carpma\n(/)Bolme\n(^)Us Alma\n(D)Dur\nLutfen yapmak istediginiz islemi seciniz: ");
}


int main(int argc, char *argv[]) {
	
	printf("HESAP MAKINESI\n");
	
	int n1, n2;
	double a1, a2;
	char select;																// değişkeni char olaraka tanımlayıp menu fonksiyonuna eşitledik ve fonksiyonu çağırdık.
	
	
	while(1){																	// seçim 0 olmadığı sürece döngünün içine girmesi şartını belirttik.
		menu();
		scanf("%c", &select);
												
		if(select == '+'){
			printf("\n2 sayi giriniz: ");								  		// kullanıcıdan işlem için 2 sayı istedik.
			scanf("%d %d", &n1, &n2);
			printf("%d + %d = %d\n", n1, n2, addOperation(n1, n2));		      	// fonksiyon ile işlem sonucunu döndürdük.
			scanf("%c", &select);												// tekrar kullanıcıdan seçim istedik.
		}
		else if(select == '-'){
			printf("\n2 sayi giriniz: ");
			scanf("%d %d", &n1, &n2);
			printf("%d - %d = %d\n", n1, n2, extrOperation(n1, n2));
			scanf("%c", &select);
		}
		else if(select == '*'){
			printf("\n2 sayi giriniz: ");
			scanf("%d %d", &n1, &n2);
			printf("%d x %d = %d\n", n1, n2, multOperation(n1, n2));
			scanf("%c", &select);
		}
		else if(select == '/'){
			printf("\n2 sayi giriniz: ");
			scanf("%lf %lf", &a1, &a2);
			printf("%.2f / %.2f = %.2f\n", a1, a2, divOperation(a1, a2));
			scanf("%c", &select);
		}
		else if(select == '^'){
			printf("\n2 sayi giriniz: ");
			scanf("%d %d", &n1, &n2);
			printf("%d ^^ %d = %d\n", n1, n2, expOperation(n1, n2));
			scanf("%c", &select);
		}
		else if(select == 'D'){
			printf("\nProgrami sonlandirdiniz.\n");								// programı durdurmak için ekrana mesaj verdik.
			break;
		}
	}
	
	return 0;
}
>>>>>>> 703df6667e28d8c3ecb6577238df651d220d2646
