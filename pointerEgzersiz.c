#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bu işlemleri adres göstermeden pointer kullanmadan yapsaydık
// main içinde değerler değişmez sadece fonksiyonun içinde değişirdi

void degistir(int *ad1, int *ad2) {
  int gecici = *ad1;
  *ad1 = *ad2;
  *ad2 = gecici;
}

int main() {

  int a=10, b=20;
  printf("Fonksiyonu cagirmadan once: %d %d\n", a, b); // 10, 20
  degistir(&a, &b); // a=20, b=10
  printf("Fonksiyonu cagirdiktan sonra %d %d", a, b);
  
  return 0;
}
