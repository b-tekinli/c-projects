#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // strncpy bir dizinin içindeki stringi diğer bir dizinin
  // içine kopyalamaya yarar fakat bu fonksiyonda 3. parametre
  // olarak n vardır yani n kadar ifadeyi kopyala demektir.

  char ad[] = "Benim adım Beyza";
  char soyad[25] = ""; // burada c'nin bir bug'ı olduğu için
  // boş karakter ataması yapmak zorundayız yoksa ekranda
  // saçma sapan karakterler görürüz
  // bu durum genelde n parametreleri fonksiyonlarda görülür

  // ad dizisindeki karakterleri soyad dizisine n kadar kopyalıyoruz
  strncpy(soyad, ad, 5); // kopyalanacak içerik 2. parametre olmalı
  // 3. parametre olarak sadece 5. karaktere kadar kopyalayacak
  // ekranda "Benim" yazacak

  printf("%s", soyad); // soyad dizisini yazdırdık ve 
  // ad dizisindeki içeriği görüntüledik
  
  return 0;
}
