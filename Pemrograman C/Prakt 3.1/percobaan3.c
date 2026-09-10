#include <stdio.h>

int main(void)
{
    float potongan_harga;
    float beli = 50000;

    puts("Menentukan potongan harga");
    printf("Budget anda adalah Rp %.2f\n", beli);

    if(beli < 100000) {
        potongan_harga = beli;
        printf("Total pembelian anda adalah: Rp %.2f\n", potongan_harga);
        printf("Anda tidak mendapat diskon");
    } else {
        potongan_harga = 0.5f * beli;
        printf("Total pembelian anda adalah: Rp %.2f\n", potongan_harga);
    }

    return 0;
}