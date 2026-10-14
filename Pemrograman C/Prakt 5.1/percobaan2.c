#include <stdio.h>

void triangular(int);

int main(){
    int n;
    puts("Bilangan Triangular");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    triangular(n);

    return 0;
}

void triangular(int x) {
    int i, total = 0;

    for(i=x; i>=0; i--)
        total += i;
    printf("Triangular %d = %d", x, total);
}