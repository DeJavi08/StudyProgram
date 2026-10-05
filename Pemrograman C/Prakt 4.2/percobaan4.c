#include <stdio.h>

int main(void) {
    char kar;
    int jml_karakter = 0; 
    int jml_spasi = 0; 

    printf("Ketikkan sembarang kalimat: ");


    while ((kar = getchar()) != '\n') {
        jml_karakter++; 

        if (kar == ' ') {
            jml_spasi++;
        }
    }

    printf("jumlah karakter = %d\n", jml_karakter);
    printf("jumlah spasi = %d\n", jml_spasi);

    return 0;
}
