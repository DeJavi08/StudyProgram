#include <stdio.h>

int main(void) {
    int n;

    puts("[Program Faktorial]");
    printf("Masukkan n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d", i);

        if(i < n)
        printf("*");
    }

    return 0;
}