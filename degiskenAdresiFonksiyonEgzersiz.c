#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int usAl(int x, int y, int *r) fonksiyonunu yaz.
// x üzeri y değerini hesapla ve sonucu döndür.
// x=4, y=5 olduğunda sonuç 1024 olması gerek.
// sonucu 4 üzeri 5 = 1024 şeklinde ekrana yazdır.
// 


void usAl(int x, int y, int *r)
{
  *r = 1;
  int i = 1;

  while(i <= y) {
    *r *= x;
    i++;
  }
}


int main() {
  
  int x=4, y=5, result;

  usAl(x, y, &result);
  
  printf("%d üzeri %d = %d", x, y, result);

  
  return 0;
}
