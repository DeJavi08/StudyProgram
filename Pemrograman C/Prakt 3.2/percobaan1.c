#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, d, x1, x2;

    puts("Program Menghitung Diskriminan dan Mencari akar-akar");
 
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
 
    printf("Masukkan nilai b: ");
    scanf("%f", &b);

    printf("Masukkan nilai c: ");
    scanf("%f", &c);
    
    d = b * b - 4 * a * c;

    if(d == 0){
        x1 = -b / 2 * a;
        x2 = x1;
        printf(
            "Nilai diskriminan = %f\n"
            "Nilai x1 = %f\n"
            "Nilai x2 = %f\n", d, x1, x2
        );
    } else if(d > 0){
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf(
            "Nilai diskriminan = %f\n"
            "Nilai x1 = %f\n"
            "Nilai x2 = %f\n", d, x1, x2
        );
    } else {
        x1 = -b / (2 * a);
        x2 = -b / (2 * a);
        float i = sqrt(-d) / (2 * a);
        printf(
            "Nilai diskriminan = %f\n"
            "Nilai x1 = %f + %f i\n"
            "Nilai x2 = %f - %f i\n", d, x1, i, x2, i
        ); 
    };

    return 0;
}