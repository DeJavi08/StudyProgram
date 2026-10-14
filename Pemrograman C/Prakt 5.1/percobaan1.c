#include <stdio.h>

void menu();

int main(){

    int n, i;

    printf("Mau coba berapa kali? ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        menu();
    puts("Selesai");

    return 0;
}

void menu() {
    puts("Pilihan Menu");
}