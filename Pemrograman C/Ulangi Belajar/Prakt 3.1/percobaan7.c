/*
    Tugas tambahan: Program penentu tahun kabisat.
    Syarat tahun kabisat:
    - Kelipatan 4 DAN bukan kelipatan 100, ATAU
    - Kelipatan 400
*/

#include <stdio.h>

int main (void) {
    int tahun;

    puts("[Program Tahun Kabisat]");
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if(tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0)
    printf("%d adalah tahun kabisat", tahun);
    else
    printf("%d bukan tahun kabisat", tahun);

    return 0;
}