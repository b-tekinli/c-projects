#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>



bool primeNumber(int n){
	
	printf("\nASAL SAYI MI?\n");
	
	int num, i, prime=1;
	
	
	printf("Say� giriniz: ");
	scanf("%d", &num);
	
	for(i=2; i<num; i++){
		if(num % i == 0){
			return false;
			//prime=0;
			//break;
		}
	}
	return true;
	
}




int totalPrimeNumber(int num){											 	// asal say� fonksiyonu tan�mlad�k.

	printf("\nTOPLAM KA� ASAL SAYI VAR?\n");
			
	int i, j, result = 0, counter = 0;
	
	printf("Bir say� giriniz: ");										 	// kullan�c�dan de�er istedik.
	scanf("%d", &num);
	
	for(j=2; j<=num; j++){ 												 	// asal say�y� 2'den ba�lat�p kullan�c�n�n girdi�i say�ya kadar 1 art�rd�k.
	        for(i=1; i<=j; i++){ 
	            if(j % i == 0){											 	// girilen say�n�n asal olup olmad���n� kontrol etmek i�in 0'a tam b�l�nen say�lar� kontrol ettik.
	                counter += 1; 
	            } 
        	} 
        	
	        if(counter == 2){ 
	            printf("%d\n", j);
	            result += 1; 
	            counter = 0; 
	        } 
	        counter = 0;           										 	// sayac�, d�ng�den ��kt���nda kald��� yerden devam etmesin diye s�f�rlad�k.                               
    } 
    printf ("\nToplam %d tane asal say� vard�r.\n\n\n", result);	       	// ekrana toplam asal say� de�erini yazd�rd�k.
}



int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Turkish");
    
    
    printf("\n0-100 ARASI ASAL SAYILAR\n");
    
    int i, j, a=0;
    
    for(i=2; i<100; i++){													// 0'dan 100'e kadar olan asal say�lar� yazd�r�yoruz.
    	for(j=1; j<=i+1; j++){
    		if(i % j == 0){
    			a++;
			}
		}
		if(a==2){
			printf("\n%d\n", i);
			a=0;		
		}
		else{
			a=0;															// kontrol yapabilsin diye sayac� s�f�rlad�k.
		}
	}
    
    
    totalPrimeNumber(1);													// toplam ka� asal say� oldu�unu g�steren fonksiyonu �a��rd�k.


    int n;
    ,

    if(primeNumber(n )==1){													// asal say�lar� true false d�nd�ren fonksiyonu �a��rd�k.
		printf("True");														// say� asal ise true d�nd�r�r.
	}
	else{																	// say� asal de�ilse false d�nd�r�r.
		printf("False");	
	}
	
		
    return 0;
}
