#include <stdio.h>

int main(void) {
    int belanja, total;
    float diskon;

    puts("[Program Potongan Harga]");
    printf("Masukkan total belanja: ");
    scanf("%d", &belanja);

    if(belanja < 100000) 
    diskon = 0;
    if(belanja >= 100000)
    diskon = 0.05;
 
    total = belanja - (belanja * diskon);

    printf("Total pembelian adalah Rp %d", total);
   
    return 0;
}