#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void kareAl(int *sonuc, int *x)
{
  *sonuc = *x * *x;
}


int main() {
  
  int x = 6, kare;
  int result;

  kareAl(&result, &x);

  printf("%d", result);
  
  return 0;
}
