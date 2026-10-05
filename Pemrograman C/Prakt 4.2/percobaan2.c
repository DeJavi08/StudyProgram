#include <stdio.h>

int main(void) {
    char kar = 'y';
    int bil, total = 0, i = 1;

    while (kar == 'y' || kar == 'Y') {
        printf("Masukkan bilangan ke-%d : ", i);
        scanf("%d", &bil);

        total += bil;
        i++;

        printf("Mau memasukkan data lagi [y/t] ? ");
        getchar();
        kar = getchar();
    }

    printf("\nTotal bilangan = %d", total);

    return 0;
}