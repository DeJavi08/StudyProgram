#include <stdio.h>

int main(void)
{
    int sisa_uang;
    int rp100k, rp50k, rp20k, rp10k, rp5k, rp2k, rp1k;
    
    printf("[Percobaan nomor 3]\n");
    
    printf("Masukkan jumlah uang: Rp ");
    scanf("%d", &sisa_uang);

    rp100k = sisa_uang / 100000;
    sisa_uang = sisa_uang % 100000;

    rp50k = sisa_uang / 50000;
    sisa_uang = sisa_uang % 50000;

    rp20k = sisa_uang / 20000;
    sisa_uang = sisa_uang % 20000;

    rp10k = sisa_uang / 10000;
    sisa_uang = sisa_uang % 10000;

    rp5k = sisa_uang / 5000;
    sisa_uang = sisa_uang % 5000;

    rp2k = sisa_uang / 2000;
    sisa_uang = sisa_uang % 2000;

    rp1k = sisa_uang / 1000;
    sisa_uang = sisa_uang % 1000;

    printf("\nBanyaknya pecahan uang:\n");

    if (rp100k > 0) {
        printf("%d Lembar 100000\n", rp100k);
    }
    if (rp50k > 0) {
        printf("%d Lembar 50000\n", rp50k);
    }
    if (rp20k > 0) {
        printf("%d Lembar 20000\n", rp20k);
    }
    if (rp10k > 0) {
        printf("%d Lembar 10000\n", rp10k);
    }
    if (rp5k > 0) {
        printf("%d Lembar 5000\n", rp5k);
    }
    if (rp2k > 0) {
        printf("%d Lembar 2000\n", rp2k);
    }
    if (rp1k > 0) {
        printf("%d Lembar 1000\n", rp1k);
    }
    if (rp100k == 0 && rp50k == 0 && rp20k == 0 && rp10k == 0 && rp5k == 0 && rp2k == 0 && rp1k == 0) {
        printf("Uang yang anda input terlalu sedikit\n");
    }

    return 0;
}