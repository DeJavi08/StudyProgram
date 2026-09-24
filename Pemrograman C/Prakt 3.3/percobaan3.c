#include <stdio.h>
#define PHI 3.14f

int main(void) {
    int pilih;
    float volume, sisi, radius, hasil, h_silinder;

    puts("[Program Menghitung Luas & Volume]");
    puts("Berikut 3 menu yang tersedia:");
    printf(
        "1. Menghitung volume kubus\n"
        "2. Menghitung luas lingkaran\n"
        "3. Menghitung volume silinder\n"
    );
    printf("Silahkan pilih menu: ");
    scanf("%d", &pilih);

    switch(pilih)
    {
        case 1:
        printf("Masukkan sisi kubus: ");
        scanf("%f", &sisi);
        hasil = sisi * sisi;
        printf("Volume kubus = %.2f", hasil);
        break;

        case 2:
        printf("Masukkan jari-jari lingkaran: ");
        scanf("%f", &radius);
        hasil = PHI * radius * radius;
        printf("Luas lingkaran = %.2f", hasil);
        break;

        case 3:
        printf("Masukkan jari-jari silinder: ");
        scanf("%f", &radius);
        printf("Masukkan tinggi silinder: ");
        scanf("%f", &h_silinder);
        hasil = PHI * radius * radius * h_silinder;
        printf("Volume silinder = %.2f", hasil);
        break;

        default:
        printf("Maaf pilihan anda tidak tepat");
    }
    
    return 0;
}