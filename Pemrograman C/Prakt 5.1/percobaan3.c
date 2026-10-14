#include <stdio.h>

float kuadrat(float)

int main(){
    float x, hasil;
    
    puts("Bilangan kuadrat");
    printf("Masukkan bilangan:");
    scanf("%f", &x);

    hasil = kuadrat(x);
    printf("%g^2 = %g", x, hasil);
    return 0;
}

float kuadrat(float bil) {
    return(bil*bil);
}