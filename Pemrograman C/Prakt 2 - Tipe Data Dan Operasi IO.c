/*
    Program ini berdasarkan arahan Bu Umi pada poin C
    https://drive.google.com/file/d/1OYDlWh4649cBRkc3W6eJoyQh40ohNp5q/view?usp=sharing

*/ 

#include <stdio.h>

int main(void)
{
    // Percobaan 1
    printf ("[Percobaan nomor 1]\n");
    int var_bulat; 
    float var_pecahan1;
    double var_pecahan2;
    char var_karakter;

    var_bulat = 32767;
    var_pecahan1 = 339.2345678f;
    var_pecahan2 = 3.4567e+40;
    var_karakter = 'S';

    printf (
        "Bulat : %d\n"
        "Pecahan1 : %f\n"
        "Pecahan2 : %e\n"
        "Karakter : %c\n\n",
        var_bulat, var_pecahan1, var_pecahan2, var_karakter
    );

    // Percobaan 2
    printf ("[Percobaan nomor 2]\n");
    float uang_dollar;
    float uang_rupiah;

    printf ("Masukkan uang dalam dollar: $");
    scanf ("%f", &uang_dollar);

    uang_rupiah = uang_dollar * 11090;

    printf ("Berikut konversi ke dalam Rupiah: Rp %.2f\n\n", uang_rupiah);

    // Percobaan 3
    printf (
        "[Percobaan nomor 3]\n"
    );
    int sisa_uang;
    int rp100k, rp50k, rp20k, rp10k, rp5k, rp2k, rp1k;

    printf ("Masukkan jumlah uang: Rp ");
    scanf ("%d", &sisa_uang);

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

    printf ("\nBanyaknya pecahan uang:\n");

    if (rp100k > 0) {
    printf ("%d Lembar 100000\n", rp100k);
    }
    if (rp50k > 0) {
    printf ("%d Lembar 50000\n", rp50k);
    }
    if (rp20k > 0) {
    printf ("%d Lembar 20000\n", rp20k);
    }
    if (rp10k > 0) {
    printf ("%d Lembar 10000\n", rp10k);
    }
    if (rp5k > 0) {
    printf ("%d Lembar 5000\n", rp5k);
    }
    if (rp2k > 0) {
    printf ("%d Lembar 2000\n", rp2k);
    }
    if (rp1k > 0) {
    printf ("%d Lembar 1000\n", rp1k);
    }
    if (rp100k == 0 && rp50k == 0 && rp20k == 0 && rp10k == 0 && rp5k == 0 && rp2k == 0 && rp1k == 0) {
        printf ("Uang yang anda input terlalu sedikit\n");
    }
    printf ("\n");

    // Percobaan 4
    printf ("[Percobaan nomor 4]\n");
    int a = 12, b = 2, c = 3, d = 4;

    printf ("a %% b = %d\n", a % b);
    printf ("a - c = %d\n", a - c);
    printf ("a + b = %d\n", a + b);
    printf ("a / d = %d\n", a / d);
    printf ("a / d * d + a %% d = %d\n", a / d * d + a % d);
    printf ("a %% d / d * a - c = %d\n", a % d / d * a - c);
    printf ("\n");

    printf (
        "[Percobaan nomor 4]\n"
        "Selamat datang di program menghitung diskriminan!"
    );

    

    return 0;
}