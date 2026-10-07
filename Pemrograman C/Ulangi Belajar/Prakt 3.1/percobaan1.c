#include <stdio.h>

int main(void) {
    int bil;

    puts("[Program Menentukan Gajil OR Genap]");
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    printf("Bilangan yang diinputkan adalah %d\n", bil);

    if(bil % 2 == 0)
    printf("%d adalah bilangan genap", bil);
    else
    printf("%d adalah bilangan ganjil", bil);

    return 0;
}