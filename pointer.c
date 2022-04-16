#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int main (void) {
//     int a = 5;
//     int *b;
//     int **c;

//     b = &a;
//     printf ("%d\n", &c);
// }

// Örnek Proje: Recursive fonksiyon ve pointer kullanarak bir dizinin elemanlarının karelerini alıp yine aynı diziye atayın. Ardından diziyi ekrana yazdırın.

void kareAl(int *p)
{
    static i = 0;
    *(p + i) = pow(*(p + i), 2);
    i++;
    if (i == 5)
        return 0;

    kareAl(p);
}

int main()
{
    int dizi[5] = {10, 11, 12, 13, 14};
    kareAl(dizi);

    for (int i = 0; i < 5; i++)
        printf("%d ", dizi[i]);
}