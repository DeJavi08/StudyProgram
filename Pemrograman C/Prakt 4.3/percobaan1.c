#include <stdio.h>

int main(void) {
    char kar;

    printf("Ketikkan sembarang kalimat (Tekan ENTER untuk keluar):\n");

    while (1) {
        kar = getchar();

        if (kar == '\n') {
            break; 
        }
        
        putchar(kar); 
    }

    printf("\nProgram selesai karena Anda menekan Enter.\n");

    return 0;
}
