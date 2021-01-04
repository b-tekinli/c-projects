#include <stdio.h>
#include <stdlib.h>

int main() {

	int sayi;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi % 3 == 0 && sayi % 5 == 0)
	{
		printf("Sayi 3 ve 5' tam bolunur.");
	}
	else
	{
		printf("Sayi 3 ve 5'e tam bolunmez.");
	}

	return 0;
}
