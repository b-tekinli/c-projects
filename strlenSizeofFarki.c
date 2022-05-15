#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char ay[] = "Aralik";

  printf("Girilen dizi: %s\n", ay);
  printf("Strlen ile dizi uzunluğu: %d\n", strlen(ay));
  printf("Sizeof ile dizi uzunluğu: %d", sizeof(ay));

  // c dilinde bir karakter dizisinin bittiğini
  // anlamak için dil otomatik olarak dizinin
  // sonuna '\0' bu null karakterini koyar
  // ve dizinin uzunluğunu +1 karakter olarak sayar
  // ama strlen fonksiyonu sondaki null karakterini
  // saymaz çünkü gerçek karakterleri sayıp döndürüyor
  // sizeof ise null karakterini de alıp sayar
  // strlen ile aralarındaki fark ise budur
  
  return 0;
}
