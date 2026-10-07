#include <stdio.h>

int main(void) {
    int n;

    puts("[Program Baris (+) (-)]");
    printf("Masukkan n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
        printf("%d ", i);
        else
        printf("-%d ", i);
    }

    return 0;
}