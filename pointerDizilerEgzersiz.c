#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

  char dizi[100] = "beyza";
  char *p1;

  
  p1 = dizi; 
  // pointer ve diziler arasındaki en önemli bilgi:
  // dizi ilk elemanın adresine eşittir.
  // yani dizi = &dizi[0];
  // burada p1 = &dizi[0] olur
  
  printf("ilk karakter %c'dir\n", *p1);
  printf("3. karakter %c'dir.", *(p1+2));

  
  return 0;
}
