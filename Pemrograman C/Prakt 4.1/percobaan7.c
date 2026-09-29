#include <stdio.h>

int main(void) {
    int n;

    puts("[Program Deret Faktorial]");
    printf("Masukkan bilangan n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        printf("%d", i);
        
        if (i < n) {
            printf("*");
        }
    }

    printf("\n");

    return 0;
}
