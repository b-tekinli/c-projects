#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>


bool primeNumber(int n){													// asal sayı fonksiyonunu tanımladık.

	printf("\nASAL SAYI MI?\n");
	
	int num, i;
	printf("Sayı giriniz: ");
	scanf("%d", &num);
	
	for(i=2; i<num; i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}

int totalPrimeNumber(int num){											 	// asal sayı toplamını veren fonksiyonu tanımladık.

	printf("\nTOPLAM KAÇ ASAL SAYI VAR?\n");
			
	int i, j, result = 0, counter = 0;
	
	printf("Bir sayı giriniz: ");										 	// kullanıcıdan değer istedik.
	scanf("%d", &num);
	
	for(j=2; j<=num; j++){ 												 	// asal sayıyı 2'den başlatıp kullanıcının girdiği sayıya kadar 1 artırdık.
	        for(i=1; i<=j; i++){ 
	            if(j % i == 0){											 	// girilen sayının asal olup olmadığını kontrol etmek için 0'a tam bölünen sayıları kontrol ettik.
	                counter += 1; 
	            } 
        	} 
        	
	        if(counter == 2){ 
	            printf("%d\n", j);
	            result += 1; 
	            counter = 0; 
	        } 
	        counter = 0;           										 	// sayacı, döngüden çıktığında kaldığı yerden devam etmesin diye sıfırladık.                               
    } 
    printf ("\nToplam %d tane asal sayı vardır.\n\n\n", result);	       	// ekrana toplam asal sayı değerini yazdırdık.
}



int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Turkish");
    
    
    printf("\n0-100 ARASI ASAL SAYILAR\n");
    
    int i, j, a=0, n;
    
    for(i=2; i<100; i++){													// 0'dan 100'e kadar olan asal sayıları yazdırıyoruz.
    	for(j=1; j<=i+1; j++){
    		if(i % j == 0){
    			a++;
			}
		}
		if(a == 2){
			printf("%d\n", i);
			a=0;		
		}
		else{
			a=0;															// kontrol yapabilsin diye sayacı sıfırladık.
		}
	}
    
    
    totalPrimeNumber(1);													// toplam kaç asal sayı olduğunu gösteren fonksiyonu çağırdık.


    
    if(primeNumber(n ) == 0){												// asal sayıları true false döndüren fonksiyonu çağırdık.
    	printf("0");														// sayı asal değilse false döndürür.														
    }
    else{																	
	printf("1");														// sayı asal ise true döndürür.
    }
	
	
    return 0;
}
