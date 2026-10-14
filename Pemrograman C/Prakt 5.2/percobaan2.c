#include <stdio.h>

long int faktorial(int);

int main() {
    int x;
    long int hasil;

    puts("[Program Faktorial]");
    printf("Masukkan bilangan: ");
    scanf("%d", &x);

    hasil = faktorial(x);

    printf("Nilai %d! = %ld\n", x, hasil);
    return 0;
}

long int faktorial(int bil) {
    long int f = 1;
    
    for (int i = bil; i > 0; i--) {
        f *= i;
    }
    
    return f;
}
