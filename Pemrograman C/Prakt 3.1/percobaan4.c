/*4. Gunakan pernyaaan if...else 
untuk menentukan sebuah bilangan 
masukan adalah bilangan prima atau bukan.

Input  : x
Output : x adalah bilangan prima atau
         bukan bilangan prima*/

#include <stdio.h>

int main() {
    int x, i, prima = 1;

    // Masukan nilai x
    printf("Masukkan bilangan x: ");
    scanf("%d", &x);

    // Bilangan kurang dari atau sama dengan 1 bukan bilangan prima
    if (x <= 1) {
        prima = 0;
    } else {
        // Cek faktor pembagi dari 2 hingga x - 1
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                prima = 0;
                break; // Hentikan perulangan jika ditemukan faktor pembagi
            }
        }
    }

    // Menentukan output menggunakan if...else
    if (prima == 1) {
        printf("%d adalah bilangan prima\n", x);
    } else {
        printf("%d bukan bilangan prima\n", x);
    }

    return 0;
}
