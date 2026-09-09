#include <stdio.h>

int main(void)
{
    int var_bulat; 
    float var_pecahan1;
    double var_pecahan2;
    char var_karakter;

    printf("[Percobaan nomor 1]\n");

    var_bulat = 32767;
    var_pecahan1 = 339.2345678f;
    var_pecahan2 = 3.4567e+40;
    var_karakter = 'S';

    printf("Bulat : %d\n"
           "Pecahan1 : %f\n"
           "Pecahan2 : %e\n"
           "Karakter : %c\n",
           var_bulat, var_pecahan1, var_pecahan2, var_karakter);

    return 0;
}