#include <stdio.h>

int main(void)
{
    float a, b, c, d;

    printf("[Percobaan nomor 5]\n");
    printf("Program Menghitung Diskriminan (D = b^2 - 4ac)\n\n");

    printf("Masukkan nilai a : ");
    scanf("%f", &a);
    printf("Masukkan nilai b : ");
    scanf("%f", &b);
    printf("Masukkan nilai c : ");
    scanf("%f", &c);

    // Proses perhitungan diskriminan
    d = (b * b) - (4 * a * c);

    // Menampilkan hasil
    printf("\nNilai Diskriminan (D) = %.2f\n", d);

    return 0;
}