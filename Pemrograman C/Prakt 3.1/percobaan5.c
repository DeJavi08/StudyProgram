#include <stdio.h>

int main(void)
{
    float bilangan1, bilangan2, bagi;

    puts("Pembagian dua bilangan");
    printf("Masukkan bilangan 1: ");
    scanf("%f", &bilangan1);

    printf("Masukkan bilangan 2: ");
    scanf("%f", &bilangan2);

    bagi = bilangan1 / bilangan2;

    if ((bilangan1 == 0) && (bilangan2 == 0)) {
        printf("ERROR: division by zero");                        
    } else {
        printf("Hasil baginya adalah %.2f", bagi);
    }

    return 0;
}