#include <stdio.h>

int main(void)
{
    float uang_dollar, uang_rupiah;

    printf("[Percobaan nomor 2]\n");

    printf("Masukkan uang dalam dollar: $");
    scanf("%f", &uang_dollar);

    uang_rupiah = uang_dollar * 11090;

    printf("Berikut konversi ke dalam Rupiah: Rp %.2f\n", uang_rupiah);

    return 0;
}