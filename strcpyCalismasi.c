#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // strcpy bir dizinin içindeki değeri yani string
  // ifadeyi diğer bir dizinin içine kopyalamaya yarar.

  char ad[] = "Benim adım Beyza";
  char soyad[25];

  // ad dizisindeki karakterleri soyad dizisine kopyalıyoruz

  strcpy(soyad, ad); // kopyalanacak içerik 2. parametre olmalı

  printf("%s", soyad); // soyad dizisini yazdırdık ve 
  // ad dizisindeki içeriği görüntüledik
  
  return 0;
}
