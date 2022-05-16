#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int usAl(int x, int y) fonksiyonunu yaz.
// x üzeri y değerini hesapla ve sonuncu döndür.
// x=4, y=5 olduğunda sonuç 1024 olması gerek.
// sonucu 4 üzeri 5 = 1024 şeklinde ekrana yazdır.


int usAl(int x, int y)
{
  int sonuc = 1, i = 1;

  while(i <= y) { // i=4 y=5
    sonuc *= x; // s=64 x=4
    i++;
  }

  return sonuc;
}


int main() {
  
  int x=4, y=5;
  
  printf("%d", usAl(x, y));
  
    
  return 0;
}
