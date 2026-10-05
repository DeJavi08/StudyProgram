#include <stdio.h>

int main(void) {
    char kar = 'y';
    int bil, total = 0, i = 1, maks, min;
    float rata_rata;

    while (kar == 'y' || kar == 'Y') {
        printf("Masukkan bilangan ke-%d : ", i);
        scanf("%d", &bil);

        total += bil;
        
        if (i == 1) {
            maks = bil;
            min = bil;
        } else {
            if (bil > maks) {
                maks = bil;
            }
            if (bil < min) {
                min = bil;
            }
        }

        i++;

        printf("Mau memasukkan data lagi [y/t] ? ");
        getchar();
        kar = getchar();
    }

    rata_rata = (float)total / (i - 1);

    printf("Total bilangan   = %d\n", total);
    printf("Rata-rata        = %.2f\n", rata_rata); 
    printf("Nilai Maksimum   = %d\n", maks);
    printf("Nilai Minimum    = %d", min);

    return 0;
}