#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // strcmp 2 karakter dizisini kıyaslar
  // ve bu değerlerin adresteki karşılıklarını
  // yani ascii kodlarını karşılaştırır ve
  // hangisi büyükse büyük değeri döndürür
  // kısaca hafızada tuttuğu yerin constant (sabit)
  // değerine göre kıyaslama yapar.


  char isim[15] = "BEYZA";
  char soyisim[15] = "beyza";

  int sonuc = strcmp(isim, soyisim);
  printf("%d\n", sonuc);

  if(sonuc < 0)
    printf("isim soyisimden daha küçüktür.");
  else if (sonuc > 0)
    printf("isim soyisimden daha büyüktür.");
  else
    printf("ikisi de birbirine eşittir");
  
  return 0;
}
