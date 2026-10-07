/*
    Jumlah karakter = m
    Jumlah Spasi = n
*/

#include <stdio.h>

int main(void) {
    char kar;
    int m = 0, n = 0;

    puts("[Program Menghitung karakter]");
    printf("Masukkan kalimat: ");

    while((kar = getchar()) != '\n') {
        m++;

        if(kar == ' ')
        n++;
    }

    printf("Jumlah karakter = %d\n", m);
    printf("Jumlah spasi = %d", n);

    return 0;
}