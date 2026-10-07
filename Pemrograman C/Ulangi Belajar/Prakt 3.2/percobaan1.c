#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, d, x1, x2, i;

    puts("[Program Diskriminan]");
    printf("Masukkan a: ");
    scanf("%f", &a);
    printf("Masukkn b: ");
    scanf("%f", &b);
    printf("Masukkan c: ");
    scanf("%f", &c);

    d = b * b - 4 * a* c;
    printf("Nilai Diskriminan: %.2f\n", d);

    if(d == 0) {
        x1 = -b / 2 * a;
        x2 = x1;
        printf("Nilai x1 = %.2f\n", x1);
        printf("Nilai x2 = %.2f\n", x2);
    } else if(d > 0) {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 *a;
        printf("Nilai x1 = %.2f\n", x1);
        printf("Nilai x2 = %.2f\n", x2);
    } else {
        x1 = -b / 2 * a;
        x2 = x1;
        i = (sqrt(-d) / 2 * a);
        printf("Nilai x1 = %.2f + %.2f i\n", x1, i);
        printf("Nilai x2 = %.2f - %.2f i\n", x2, i);
    }

    return 0;
}