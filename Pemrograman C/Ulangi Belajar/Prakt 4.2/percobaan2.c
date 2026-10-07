#include <stdio.h>

int main(void) {
    int bil, total = 0, i = 1;
    char pilih = 'y';

    while(pilih == 'Y' || pilih == 'y') {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &bil);

        total += bil;
        i++;

        printf("Mau masukkan data lagi [y/t] ? ");
        getchar();
        pilih = getchar();
    }

    printf("Total bilangan = %d", total);

    return 0;
}