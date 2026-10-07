#include <stdio.h>

int main(void) {
    int bil, total = 0, i = 1, maksimum, minimum;
    float rerata;
    char pilih = 'y';

    while(pilih == 'Y' || pilih == 'y') {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &bil);

        total += bil;

        if(i == 1) {
            minimum = bil;
            maksimum = bil;
        } else {
            if (bil > maksimum)
                maksimum = bil;

            if (bil < minimum)
                minimum = bil;
        }

        i++;

        printf("Mau masukkan data lagi [y/t] ? ");
        getchar();
        pilih = getchar();
    }

    rerata = (float) total / (i-1);

    printf("Total bilangan = %d\n", total);
    printf("Nilai Minimum = %d\n", minimum);
    printf("Nilai maksimum = %d\n", maksimum);
    printf("Nilai rata-rata = %.2f", rerata);

    return 0;
}