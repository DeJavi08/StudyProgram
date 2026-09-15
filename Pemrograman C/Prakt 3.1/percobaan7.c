/*
    Tugas tambahan: Membuat program yang bisa
    cek tahun kabisat atau bukan, syarat tahun kabisat:
    - Habis dibagi 400
    - Habis dibagi 100 tetapi tidak habis 400, jika 
    - Tidak habis di bagi 4
*/

#include <stdio.h>

int main(void) 
{
    int tahun;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if(tahun % 400 == 0){
        printf("%d adalah tahun kabisat\n", tahun);
    } else if(tahun % 100 == 0){
        printf("%d bukan tahun kabisat\n", tahun);
    } else if(tahun % 4 == 0){
        printf("%d adalah tahun kabisat\n", tahun);
    } else {
        printf("%d bukan tahun kabisat", tahun);
    }

    return 0;
}