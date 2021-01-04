#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("*** Cemberin Alan ve Cevresini Hesaplama\n");
	
	float pi, r, alan, cevre;
	
	pi = 3.14;
	
	printf("Yaricap degeri = ");
	scanf("%f",&r);
	
	alan = pi * r * r;
	cevre = 2 * pi * r;
	
	printf("Alan = %f\n",alan);
	printf("Cevre = %f",cevre);
	
	return 0;
}
