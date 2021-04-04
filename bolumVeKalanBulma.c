#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	printf("Division Process\n\n");
	
	int dividing, divisor, remaining;			// variable definition
	double divided;
	
	printf("Enter the dividing: ");
	scanf("%d", &dividing);
	
	printf("Enter the divisor: ");
	scanf("%d", &divisor);
	
	divided = dividing / divisor;				// divided calculation
	printf("\nDivided: %.2f", divided);
	
	remaining = dividing % divisor;				// remaining calculation
	printf("\nRemaining: %d", remaining);
	
	
	
	
	
	printf("\n\nPrinting Name Letters\n\n");
	
	printf("******\n");
	printf("*     *\n");
	printf("*     *\n");
	printf("*****\n");
	printf("*     *\n");
	printf("*     *\n");
	printf("******\n\n");
	
	
	printf("*******\n");
	printf("   *     \n");
	printf("   *     \n");
	printf("   *     \n");
	printf("   *     \n");
	printf("   *     \n\n");
	
	
	return 0;
}
