#include <stdio.h>

int main(void)
{
    int variable_1;
    char variable_2;

    printf("input int: ");
    scanf("%d", &variable_1);

    getchar();

    printf("input char: ");
    variable_2 = getchar();

    printf("Int anda: %d\n", variable_1);
    printf("Char anda: %c", variable_2);

    return 0;
}