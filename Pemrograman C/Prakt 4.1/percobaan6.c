#include <stdio.h>

int main(void) {
    int n;

    puts("[Program Deret Bilangan Keren]");
    printf("Masukkan bilangan n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("-%d", i);
        } else {
            printf("%d", i);
        }
        
        if (i < n) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
