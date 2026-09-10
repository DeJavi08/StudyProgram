#include <stdio.h>

int main(void)
{
    int bilangan;
    puts("Menentukan bilangan dalam range");
    printf("Masukkan input bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan >= 1 && bilangan <= 100) {
        printf("%d ada dalam range 1-100", bilangan);
    } else {
        printf("%d ada di luar range 1-100", bilangan);
    }

    return 0;
}