#include <stdio.h>

int ganjil(int);


int main() {
    int x;

    puts("[Program Deteksi Bilangan Ganjil]");
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &x);

    if (ganjil(x) == 1) {
        printf("Bilangan %d adalah Ganjil\n", x);
    } else {
        printf("Bilangan %d adalah Genap\n", x);
    }

    return 0;
}

int ganjil(int bil) {
    if (bil % 2 != 0) {
        return 1; 
    } else {
        return 0; 
    }
}
