#include <stdio.h>

int main(void)
{
    int bilangan;
    puts("Menentukan Ganjil atau Genap");
    printf("Masukkan angka: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("%d adalah Genap", bilangan);
    } else {
        printf("%d adalah bilangan Genap", bilangan);
    }
    
    return 0;
}