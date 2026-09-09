#include <stdio.h>

int main(void) 
{
    float variable;
    float sum;

    variable = 10.0f;
    sum = variable * 50.0f;

    printf ("Perkalian float (%0.1f) dengan 50 = %0.1f", variable, sum);

    return 0;
}