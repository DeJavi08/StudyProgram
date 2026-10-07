#include <stdio.h>

int main(void) {
    char kar;
    
    puts("[Program Loop While NOT 'X']");
    printf("Masukkan karakter: ");

    while(kar != 'X') {
        kar = getchar();
    }

    printf("Program selesai karena input = X");
    return 0;
}