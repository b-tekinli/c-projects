#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define elemanSayisi 5

// 5 tane int tipinde değer tutan bir dizi tanımla.
// dizinin tüm elemanlarını kullanıcıdan girmesini iste.
// dizinin max ve min değerlerini bulup ekrana yazdır.
// for kullan.


int main() {
  
  int dizi[elemanSayisi], i, max, min;

  printf("Diziye 5 tane eleman giriniz: \n");

  for(i=0; i<elemanSayisi; i++) {
    scanf("%d", &dizi[i]);
  }

  for(i=0; i<=elemanSayisi; i++) {
    printf("%5d", dizi[i]);
  }

  max=min=dizi[0];
  
  for(i=1; i<elemanSayisi; i++) {
    if(dizi[i]>max) {
      max=dizi[i];
    }
    if(dizi[i]<min) {
      min=dizi[i];
    }
  }

  printf("maximum değer: %d\n", max);
  printf("minimum değer: %d\n", min);

  
  return 0;
}
