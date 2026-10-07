#include <stdio.h>

int main(void) {
    int n;

    puts("[Program Deret ganjil kecuali kelipatan 3]");
    printf("Masukkan bilangan n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i+=2){
        if(i % 3 == 0)
        continue;

        printf("%d ", i);
    }

    return 0;
}