#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num, i, result;
	
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &num);
    
    
    for (i=1; i<=10; i++) {
	    printf("\n%d x %d = ", num, i, result);
	    scanf("%d", &result);
	        
	    if(result == (num * i)){
			printf("\nHarika! Dogru bildiniz. Tebrikler :)\n");
		}
		else{
			printf("\nYanlis cevap! Lutfen tekrar deneyiniz...\n\n");
			scanf("%d", &result);
			if(result != (num * i)){
				i--;
			}
		}
	}

	    
	
	
	return 0;
	
}
=======
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num, i, result;
	
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &num);
    
    
    for (i=1; i<=10; i++) {
	    printf("\n%d x %d = ", num, i, result);
	    scanf("%d", &result);
	        
	    if(result == (num * i)){
			printf("\nHarika! Dogru bildiniz. Tebrikler :)\n");
		}
		else{
			printf("\nYanlis cevap! Lutfen tekrar deneyiniz...\n\n");
			scanf("%d", &result);
			if(result != (num * i)){
				i--;
			}
		}
	}

	    
	
	
	return 0;
	
}
