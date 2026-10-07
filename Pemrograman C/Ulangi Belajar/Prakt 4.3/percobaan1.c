#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char kar;

    puts("[Looping dengan break]");
    printf("Masukkan sembarang kata (tekan enter untuk exit):  ");

    while(1) {
        kar = getchar();

        if (kar = '\n') {
            break;
        }

        putchar(kar);
    }

    printf("Selesai");
    return 0;
}