#include <stdio.h>

int main(void)
{
    float potongan_harga;
    float beli;

    puts("Menentukan potongan harga");
    printf("Masukkan budget anda: Rp ");
    scanf("%f", &beli);

    if(beli < 100000) {
        potongan_harga = beli;
        printf("Total pembelian anda adalah: Rp %.2f", potongan_harga);
    } else {
        potongan_harga = 0.5f * beli;
        printf("Total pembelian anda adalah: Rp %.2f", potongan_harga);
    }

    return 0;
}