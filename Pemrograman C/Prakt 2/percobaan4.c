#include <stdio.h>

int main(void)
{
    int a = 12, b = 2, c = 3, d = 4;

    printf("[Percobaan nomor 4]\n");

    printf("a %% b = %d\n", a % b);
    printf("a - c = %d\n", a - c);
    printf("a + b = %d\n", a + b);
    printf("a / d = %d\n", a / d);
    printf("a / d * d + a %% d = %d\n", a / d * d + a % d);
    printf("a %% d / d * a - c = %d\n", a % d / d * a - c);

    return 0;
}