#include <stdio.h>
#define PI 3.14f

int main(void)
{
    printf("[Percobaan nomor 7]\n");

    float radius;
    float luas_lingkaran;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    luas_lingkaran = PI * radius * radius;

    printf("Luas lingkarannya adalah %.2f", luas_lingkaran);

    return 0;
}