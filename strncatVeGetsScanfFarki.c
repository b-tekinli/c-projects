#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // strncat 2 karakter dizisinin 2. dizideki karakterlerden 
  // n kadarını 1. dizi ile birleştirir.

  char s1[100];
  char s2[100];
  int n;

  printf("Lutfen bir yazi giriniz: \n");
  // scanf("%s", s1);
  gets(s1); // user tarafından girilen metinde boşluk karakter
  // varsa gets onları da alır fakat scanf almaz

 printf("Lutfen 2. yaziyi giriniz: \n");
  gets(s2);


  printf("1. yazinin sonuna kac karakter eklensin?\n");
  scanf("%d", &n);
  
  printf("Birlestirmeden once: %s\n", s1);


  printf("Birlestirdikten sonra: ");
  strncat(s1, s2, n); // buradaki argümanları s1=ben, s2=beyza yasim 22, n=2 girersek ekranda benbe yazar 2. diziden sadece 2 karakter alır ve birleştirir
  printf("%s", s1);
  
  // 2. dizideki karakteri 1. diziye eklediği için
  // 1. diziyi yazdırıyoruz
  
  return 0;
}
