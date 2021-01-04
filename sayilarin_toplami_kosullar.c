#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int s1, s2, toplam;
	
	s1 = 12;
	s2 = 11;
	toplam = s1 + s2;
	
	if(toplam>20)
	{
		printf("Toplam degeriniz: %d ==> 20'den buyuk",toplam);
	}
	else
	{
		printf("Toplam degeriniz: %d ==> 20'den kucuk",toplam);
	}
	
	return 0;
}
