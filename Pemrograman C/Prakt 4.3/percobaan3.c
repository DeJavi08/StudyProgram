#include <stdio.h>

int main(void) {
    int n, x = 0;

    puts("[Program menampilkan bilangan ganjil kecuali kelipatan 7 dan 11]");
    puts("[Dari 1 sampai < n ATAU < 100]\n");
    
    printf("Input n: ");
    scanf("%d", &n);

    printf("Hasil:\n");

    for (int i = 1; ; i++) {
        if (i >= n || i >= 100) {
            break;
        }

        if (i % 2 == 0) {
            continue;
        }

        if (i % 7 == 0 || i % 11 == 0) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}