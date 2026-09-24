/*
Tugas tambahan, dari PPT
Challenge: Cashback e-Wallet
Menggunakan logika nested if-else
*/

#include <stdio.h>

int main(void) {
    int member;
    float total_transaksi;
    float persen_cashback;
    float nominal_cashback;

    printf("Apakah Anda member? (1 = Ya, 0 = Tidak): ");
    scanf("%d", &member);

    printf("Masukkan total transaksi: Rp ");
    scanf("%f", &total_transaksi);

    // Struktur keputusan nested if-else
    if (member) {
        if (total_transaksi >= 200000) {
            persen_cashback = 15.0;
        } else {
            persen_cashback = 5.0;
        }
    } else {
        persen_cashback = 0.0;
    }

    nominal_cashback = (persen_cashback / 100.0) * total_transaksi;

    puts("\nHasil Perhitungan:");
    printf("Persentase Cashback: %.0f%%\n", persen_cashback);
    printf("Total Cashback     : Rp %.2f\n", nominal_cashback);

    return 0;
}