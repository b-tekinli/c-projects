#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int kisa, uzun, alan, cevre;
	
	kisa = 4;
	uzun = 8;
	
	alan = kisa * uzun;
	cevre = 2 * (kisa + uzun);
	
	printf("Alan = %d\n",alan);
	printf("Cevre = %d",cevre);

	return 0;
}
