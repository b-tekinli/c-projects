#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int kenar, alan, cevre;
	
	kenar = 18;
	alan = (kenar * kenar) * (3 / 4);
	cevre = kenar * 3;
	
	printf("Alan = %d\n",alan);
	printf("Cevre = %d",cevre);

	return 0;
}
