#include <stdio.h>

int main(void) {
    float bil1, bil2, hasil;

    puts("[Program Pembagian]");
    printf("Masukkan bilangan 1: ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan 2: ");
    scanf("%d", &bil2);

    hasil = bil1 / bil2;

    if((bil1 == 0) && (bil2 == 0))
    printf("ERROR: division by zero");
    else if (bil2 == 0)
    printf("ERROR: bilangan kedua tidak boleh zero");
    else 
    printf("Hasil baginya: %.3f", hasil);

    return 0;
}