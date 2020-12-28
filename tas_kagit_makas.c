#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("TAÞ KAÐIT MAKAS OYUNU\n\n");
	/*
	tas --> makas
	makas --> kagit
	kagit --> tas
	*/
	srand(time(NULL));
	int i = 0, tahmin;
	int userSkor = 0, pcSkor = 0;
	
	while(i < 5){
		printf("Lütfen tahmininizi girinizi (1.taþ, 2. kaðýt, 3. makas): \n");
		scanf("%d", &tahmin);
		
		int bilgisayarTahmini = (rand()%3)+1;
		
		if(tahmin == 1){
			
			if(bilgisayarTahmini == 3)
			{
				userSkor++;
				printf("Kazandýnýz. \n");
			}	
			else if(bilgisayarTahmini == 2)
			{
				pcSkor++;
				printf("Bilgisayar kazandý. \n");
			}
			else if(bilgisayarTahmini == 1)
				printf("Berabere. \n");
				
		}else if(tahmin == 2){
			
			if(bilgisayarTahmini == 3)
			{
				pcSkor++;
				printf("Bilgisayar kazandý. \n");
			}
			else if(bilgisayarTahmini == 1)
			{
				userSkor++;
				printf("Kazandýnýz. \n");
			}
				
			else if(bilgisayarTahmini == 2)
				printf("Berabere. \n");
			
		}else if(tahmin == 3){
			
			if(bilgisayarTahmini == 1)
			{
				pcSkor++;
				printf("Bilgisayar kazandý. \n");
			}
				
			else if(bilgisayarTahmini == 2)
			{
				userSkor++;
				printf("Kazandýnýz. \n");
			}
				
			else if(bilgisayarTahmini == 1)
				printf("Berabere. \n");
			
		}else{
			printf("Kural dýþý tahmin giriþi!!\n");
		}
		
		i++;
	}
	
	printf("user %d - %d pc", userSkor, pcSkor);
	
	return 0;
}
