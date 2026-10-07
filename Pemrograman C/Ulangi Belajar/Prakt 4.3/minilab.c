#include <stdio.h>

int main(void) {

    int i, j, n;

    puts("Pattern generator");
    printf("Masukkan berapa baris yang anda mau: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    } 

    return 0;
}