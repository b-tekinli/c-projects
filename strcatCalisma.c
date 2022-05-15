#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // strcat 2 karakter dizisini birleştirir.

  char bos[20]; // alabileceği max karakter sayısını belirtmeliyiz

  strcpy(bos, "Benim"); // Benim değerini bos dizisine atadık

  strcat(bos, " adim Beyza"); // adim Beyza degerini de bos
  // dizisine attık ve artık diziler birlestigi icin
  // bos dizisinde Benim adim Beyza yazıyor

  printf("%s", bos);
  return 0;
}
