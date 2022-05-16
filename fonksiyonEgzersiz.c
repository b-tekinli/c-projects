#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int usAl(int x, int y) fonksiyonunu yaz.
// x üzeri y değerini hesapla ve sonucu döndür.
// x=4, y=5 olduğunda sonuç 1024 olması gerek.
// sonucu 4 üzeri 5 = 1024 şeklinde ekrana yazdır.


int usAl(int x, int y)
{
  int sonuc = 1, i = 1;

  while(i <= y) {
    sonuc *= x;
    i++;
  }

  return sonuc;
}


int main() {
  
  int x=4, y=5;
  
  printf("%d üzeri %d = %d", x, y, usAl(x, y));

  
  return 0;
}
