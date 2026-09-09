#include <stdio.h>

int main(void)
{
    int harga_tiket = 50000;
    int jumlah_tiket;
    int jumlah_paket;  
    int sisa_tiket;    
    int total_biaya;

    printf("Masukkan jumlah tiket sepak bola: ");
    scanf("%d", &jumlah_tiket); 

    jumlah_paket = jumlah_tiket / 3; 
    sisa_tiket = jumlah_tiket % 3; 

    total_biaya = (jumlah_paket * (2 * harga_tiket)) + (sisa_tiket * harga_tiket);

    printf("Total biaya yang harus dibayar: Rp %d", total_biaya);

    return 0;
}
