#include <stdio.h>

int main(void)
{
    int nilai_angka;

    puts("Program Konversi Nilai Angka ke Huruf");
    printf("Masukkan nilai anda: ");
    scanf("%d", &nilai_angka);

    if (nilai_angka >= 80 && nilai_angka <= 100) {
        printf("Nilai huruf anda = A\n");
    } 
    else if (nilai_angka >= 70 && nilai_angka < 80) {
        printf("Nilai huruf anda = B\n");
    } 
    else if (nilai_angka >= 60 && nilai_angka < 70) {
        printf("Nilai huruf anda = C\n");
    } 
    else if (nilai_angka >= 50 && nilai_angka < 60) {
        printf("Nilai huruf anda = D\n");
    } 
    else if (nilai_angka >= 0 && nilai_angka < 50) {
        printf("Nilai huruf anda = E\n");
    } 
    else {
        printf("Nilai tidak valid! Masukkan angka antara 0 - 100.\n");
    }

    return 0;
}