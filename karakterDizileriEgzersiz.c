#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // 2 adet karakter dizisi oluştur.
  // 1. "bonne"  2. "soiree"
  // strcpy ve strncpy kullanarak 2 karakter dizisini birleştir
  // elde ettiğin karakter dizisi bonsoire olmalı ekrana bastır


  char s1[] = "bonne";
  char s2[] = "soiree";
  char sonuc[50] = ""; // maks alabileceği karakter dizizisini belirtmemiz gerekli
  
  strcpy(sonuc, s1);
  strncpy(sonuc+3, s2, 5);
  printf("Elde edilen dizi: %s", sonuc);

  
  return 0;
  
  return 0;
}
