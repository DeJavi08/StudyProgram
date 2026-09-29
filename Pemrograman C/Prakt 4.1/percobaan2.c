#include <stdio.h>

int main(void) {
    int bil;
    int total = 0;

    puts("[Program Menghitung Bilangan Triangular]");
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    for (int i = bil; i > 0; i--) {
        total += i;
    }

    printf("Bilangan triangular dari %d adalah: %d\n", bil, total);

    return 0;
}