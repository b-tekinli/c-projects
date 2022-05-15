#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // strncmp aynı strcmp gibi fakat araya n girmişse
  // belli bir karaktere işlem yapmamız anlamına gelir
  // yani dizileri n kadar karşılaştır demektir


  char isim[15] = "BEYZA";
  char soyisim[15] = "beyza";

  int sonuc = strncmp(isim, soyisim, 2); /* burada
  strcmpde olmayan 3. parametre ekledik n kadar 
  karşılatırma yaptırmak için burada 2 karakter 
  karşılaştır demiş olduk
  */
  printf("%d\n", sonuc);

  if(sonuc < 0)
    printf("isim soyisimden daha küçüktür.");
  else if (sonuc > 0)
    printf("isim soyisimden daha büyüktür.");
  else
    printf("ikisi de birbirine eşittir");
  
  return 0;
}
