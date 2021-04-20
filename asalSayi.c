#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>



bool primeNumber(int n){
	
	printf("\nASAL SAYI MI?\n");
	
	int num, i, prime=1;
	
	
	printf("Sayý giriniz: ");
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




int totalPrimeNumber(int num){											 	// asal sayý fonksiyonu tanýmladýk.

	printf("\nTOPLAM KAÇ ASAL SAYI VAR?\n");
			
	int i, j, result = 0, counter = 0;
	
	printf("Bir sayý giriniz: ");										 	// kullanýcýdan deðer istedik.
	scanf("%d", &num);
	
	for(j=2; j<=num; j++){ 												 	// asal sayýyý 2'den baþlatýp kullanýcýnýn girdiði sayýya kadar 1 artýrdýk.
	        for(i=1; i<=j; i++){ 
	            if(j % i == 0){											 	// girilen sayýnýn asal olup olmadýðýný kontrol etmek için 0'a tam bölünen sayýlarý kontrol ettik.
	                counter += 1; 
	            } 
        	} 
        	
	        if(counter == 2){ 
	            printf("%d\n", j);
	            result += 1; 
	            counter = 0; 
	        } 
	        counter = 0;           										 	// sayacý, döngüden çýktýðýnda kaldýðý yerden devam etmesin diye sýfýrladýk.                               
    } 
    printf ("\nToplam %d tane asal sayý vardýr.\n\n\n", result);	       	// ekrana toplam asal sayý deðerini yazdýrdýk.
}



int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Turkish");
    
    
    printf("\n0-100 ARASI ASAL SAYILAR\n");
    
    int i, j, a=0;
    
    for(i=2; i<100; i++){													// 0'dan 100'e kadar olan asal sayýlarý yazdýrýyoruz.
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
			a=0;															// kontrol yapabilsin diye sayacý sýfýrladýk.
		}
	}
    
    
    totalPrimeNumber(1);													// toplam kaç asal sayý olduðunu gösteren fonksiyonu çaðýrdýk.


    int n;
    ,

    if(primeNumber(n )==1){													// asal sayýlarý true false döndüren fonksiyonu çaðýrdýk.
		printf("True");														// sayý asal ise true döndürür.
	}
	else{																	// sayý asal deðilse false döndürür.
		printf("False");	
	}
	
		
    return 0;
}
