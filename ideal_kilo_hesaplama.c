#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("ideal kilo hesaplama\n\n");
	
	/*kadýn ==> 0,8 	erkek ==> 0,9 */
	
	float boy,yas,ideal;
	boy = 168;
	yas = 21;
	ideal = (boy-100+yas/10)*0.9;
	printf("ideal kilonuz: %f",ideal);
	
	return 0;
}
