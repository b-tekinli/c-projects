#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float tr, mat, sos, fen, taban, toplamPuan;
	
	taban = 180.160;
	
	printf("Turkce netiniz: ");
	scanf("%f",&tr);
	
	printf("Matematik netiniz: ");
	scanf("%f",&mat);
	
	printf("Sosyal netiniz: ");
	scanf("%f",&sos);
	
	printf("Fen netiniz: ");
	scanf("%f",&fen);
	
	toplamPuan = (tr * 1.999) + (mat * 3.998) + (sos * 1) + (fen * 2.999) + taban;
	printf("Toplam puaniniz = %f",toplamPuan);
	
	return 0;
}
