#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  
  // 2 boyutlu bir dizi oluşturun
  // dizinin elemanları 1,2,3,4,5 olsun
  // dizinin 4. elemanının 3. karakterini ekrana bastırın


  char sayilar[5][5] = {"bir", "iki", "uc", "dort", "bes"}; // {b}, {i}, {r}, {/0} gibi de tanımlanabilir

  printf("Dizinin 4. elemanı: %s", sayilar[3]);
  printf("Dizinin 4. elemanının 3. karakteri: %c", sayilar[3][2]);
  
  
  return 0;
}
