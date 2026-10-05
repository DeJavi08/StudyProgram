#include <stdio.h>

int main(void) {
    char kar;

    puts("[Program Looping While NOT 'X']");
    puts("Program ini terus looping jika user tidak input 'X'");

    printf("Masukkan karakter : ");
    
    while(kar != 'X') {
        kar = getchar();
    }

    printf("Selesai!");

    return 0;
}
