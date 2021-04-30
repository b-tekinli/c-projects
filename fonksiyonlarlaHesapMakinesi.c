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
