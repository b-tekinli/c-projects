#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // 2 adet karakter dizisi oluştur.
  // 1. "bonne"  2. "soiree"
  // strcpy ve strncpy kullanarak 2 karakter dizisini birleştir
  // elde ettiğin karakter dizisini ekrana bastır


  char s1[100] = "bonne";
  char s2[100] = "soiree";

  strcpy(s1, s2);
  printf("strcpy ile elde edilen dizi: %s\n", s1);
  
  strncpy(s2, s1, 2);
  printf("strtncpy ile elde edilen dizi: %s", s2);
    
  
  return 0;
}
