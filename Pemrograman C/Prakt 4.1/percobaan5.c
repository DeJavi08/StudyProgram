#include <stdio.h>

int main(void) {
    int n;

    puts("[Program Bilangan ganjil ke-n]");
    printf("Masukkan bilangan n: ");
    scanf("%d", &n);

    for(int i = 1; i <= 2 * n - 1; i += 2) {
        printf("%d ", i);
    }

    return 0;
}