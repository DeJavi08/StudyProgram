#include <stdio.h>

int main(void)
{

    printf("[Percobaan nomor 6]\n");
    printf("Percobaan 2 dan 3 dengan tipe data float\n\n");

    // Nomor 2
    printf("[Percobaan nomor 2]\n");
    
    float uang_dollar;
    float uang_rupiah;

    printf("Masukkan uang dalam dollar: $");
    scanf("%f", &uang_dollar);

    uang_rupiah = uang_dollar * 11090.0f;
    printf("Berikut konversi ke dalam Rupiah: Rp %.2f\n", uang_rupiah);

    // Nomor 3
    printf("[Percobaan nomor 3]\n");
    float sisa_uang;
    float rp100k, rp50k, rp20k, rp10k, rp5k, rp2k, rp1k;

    printf("Masukkan jumlah uang: Rp ");
    scanf("%f", &sisa_uang); 

    rp100k = (int)(sisa_uang / 100000.0f);
    sisa_uang = sisa_uang - (rp100k * 100000.0f);

    rp50k = (int)(sisa_uang / 50000.0f);
    sisa_uang = sisa_uang - (rp50k * 50000.0f);

    rp20k = (int)(sisa_uang / 20000.0f);
    sisa_uang = sisa_uang - (rp20k * 20000.0f);

    rp10k = (int)(sisa_uang / 10000.0f);
    sisa_uang = sisa_uang - (rp10k * 10000.0f);

    rp5k = (int)(sisa_uang / 5000.0f);
    sisa_uang = sisa_uang - (rp5k * 5000.0f);

    rp2k = (int)(sisa_uang / 2000.0f);
    sisa_uang = sisa_uang - (rp2k * 2000.0f);

    rp1k = (int)(sisa_uang / 1000.0f);
    sisa_uang = sisa_uang - (rp1k * 1000.0f);

    printf("\nBanyaknya pecahan uang:\n");

    if (rp100k > 0.0f) {
        printf("%.0f Lembar 100000\n", rp100k);
    }
    if (rp50k > 0.0f) {
        printf("%.0f Lembar 50000\n", rp50k);
    }
    if (rp20k > 0.0f) {
        printf("%.0f Lembar 20000\n", rp20k);
    }
    if (rp10k > 0.0f) {
        printf("%.0f Lembar 10000\n", rp10k);
    }
    if (rp5k > 0.0f) {
        printf("%.0f Lembar 5000\n", rp5k);
    }
    if (rp2k > 0.0f) {
        printf("%.0f Lembar 2000\n", rp2k);
    }
    if (rp1k > 0.0f) {
        printf("%.0f Lembar 1000\n", rp1k);
    }
    if (rp100k == 0.0f && rp50k == 0.0f && rp20k == 0.0f && 
        rp10k == 0.0f && rp5k == 0.0f && rp2k == 0.0f && 
        rp1k == 0.0f) {
        printf("Uang yang anda input terlalu sedikit\n");
    }

    if (sisa_uang > 0.0f) {
        printf("Sisa yang tidak tertukar: Rp %.2f\n", sisa_uang);
    }

    return 0;
}