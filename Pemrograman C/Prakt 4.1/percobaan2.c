#include <stdio.h>

int main(void) {
    int bil;

    puts("[Program Menghitung Bilangan Triangular]");
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    printf("Bilangan triangular dari %d adalah : ", bil);

    for (int i = bil; i > 0; i--) {
        printf("%d", i);
        
        if (i > 1) {
            printf(" + ");
        }
    }

    return 0;
}
