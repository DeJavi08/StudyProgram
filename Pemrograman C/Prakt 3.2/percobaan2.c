#include <stdio.h>

int main(void)
{
    float opn1, opn2, hasil;
    int pilih;
    char opr;

    puts("Kalkulator Sederhana");
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &opn1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &opn2);

    puts("Menu Matematika");
    puts("Silahkan pilih dengan angka");
    printf(
        "Penjumlahan (1)\n"
        "Pengurangan (2)\n"
        "Pembagian (3)\n"
        "Perkalian (4)\n"
    );
    printf("Masukkan pilihan anda: ");
    scanf("%d", &pilih);

    if(pilih == 1) {
        hasil = opn1 + opn2;
        printf("Hasil operasi tersebut = %f", hasil);
    } else if(pilih == 2) {
        hasil = opn1 - opn2;
        printf("Hasil operasi tersebut = %f", hasil);
    } else if(pilih == 3) {
        hasil = opn1 / opn2;
        printf("Hasil operasi tersebut = %f", hasil);
    } else if(pilih == 4) {
        hasil = opn1 * opn2;
        printf("Hasil operasi tersebut = %f", hasil);        
    } else {
        printf("Pilihan anda salah");
    }

    return 0;
}