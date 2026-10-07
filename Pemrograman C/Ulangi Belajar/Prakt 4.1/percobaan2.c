#include <stdio.h>

int main(void) {
    int i, bil;

    puts("[Program Bilangan Triangular]");
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    for(i = bil; i > 0; i--){
        printf("%d", i);

        if(i > 1)
        printf(" + ");
    }

    return 0;
}