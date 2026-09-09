#include <stdio.h>

int main(void)
{
    printf("[Percobaan 1]\n");

    float celcius;
    float fahrenheit;

    printf("Suhu dalam Celcius: ");
    scanf("%f", &celcius);
    
    fahrenheit = celcius * 1.8f + 32.0f;

    printf("Berikut konversi ke dalam Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}