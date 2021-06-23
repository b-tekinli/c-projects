<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdlib.h>

int addOperation(int num1, int num2){											// toplama iÅŸlemi fonksiyonu
	return num1 + num2;
}



int extrOperation(int num1, int num2){											// Ã§Ä±karma iÅŸlemi fonksiyonu
	return num1 - num2;
}



int multOperation(int num1, int num2){											// Ã§arpma iÅŸlemi fonksiyonu
	return num1 * num2;
}



double divOperation(double num1, double num2){									// bÃ¶lme iÅŸlemi fonksiyonu
	return num1 / num2;
}



int expOperation(int num1, int num2){											// Ã¼s alma iÅŸlemi fonksiyonu
	
	int result = 1, i;

	for(i=1; i<=num2; i++){											   			// sayÄ±nÄ±n Ã¼s kadar tekrarlanmasÄ±nÄ± saÄŸladÄ±k.
		result *= num1;
	}
	
	return result;
}


char menu(){																	// menÃ¼ fonksiyonu tanÄ±mladÄ±k.
	printf("\n(+)Toplama\n(-)Cikarma\n(*)Carpma\n(/)Bolme\n(^)Us Alma\n(D)Dur\nLutfen yapmak istediginiz islemi seciniz: ");
}


int main(int argc, char *argv[]) {
	
	printf("HESAP MAKINESI\n");
	
	int n1, n2;
	double a1, a2;
	char select;																// deÄŸiÅŸkeni char olaraka tanÄ±mlayÄ±p menu fonksiyonuna eÅŸitledik ve fonksiyonu Ã§aÄŸÄ±rdÄ±k.
	
	
	while(1){																	// seÃ§im 0 olmadÄ±ÄŸÄ± sÃ¼rece dÃ¶ngÃ¼nÃ¼n iÃ§ine girmesi ÅŸartÄ±nÄ± belirttik.
		menu();
		scanf("%c", &select);
												
		if(select == '+'){
			printf("\n2 sayi giriniz: ");								  		// kullanÄ±cÄ±dan iÅŸlem iÃ§in 2 sayÄ± istedik.
			scanf("%d %d", &n1, &n2);
			printf("%d + %d = %d\n", n1, n2, addOperation(n1, n2));		      	// fonksiyon ile iÅŸlem sonucunu dÃ¶ndÃ¼rdÃ¼k.
			scanf("%c", &select);												// tekrar kullanÄ±cÄ±dan seÃ§im istedik.
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
			printf("\nProgrami sonlandirdiniz.\n");								// programÄ± durdurmak iÃ§in ekrana mesaj verdik.
			break;
		}
	}
	
	return 0;
}
>>>>>>> 703df6667e28d8c3ecb6577238df651d220d2646
