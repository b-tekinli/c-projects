#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("Suyun Durumu\n\n");
	
	int su;
	
	printf("Sicaklik degerini girin: ");
	scanf("%d",&su);
	
	if(su <= 0)
	{
		printf("Su su anda buz halinde.");
	}
	if(su > 0 && su < 100)
	{
		printf("Su sivi halde.");
	}
	if(su >= 100)
	{
		printf("Su buhar halinde.");
	}
	
	return 0;
}
