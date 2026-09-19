#include <stdio.h>

int main(void) {
    char letter;
    int sum = 0, valid_flag = 0;

    puts("Program Tebak Huruf");
    printf("Masukkan huruf anda: ");
    letter = getchar();

    switch (letter)
    {
        case 'X':
        sum = 0;
        break;
            
        case 'Z':
        valid_flag = 1;
        break;

        case 'A':
        sum = 1;
        break;

        default:
        printf("Unknown letter --> %c\n, letter");
        break;        
     }

    puts("Hasil Akhir:");
    printf("sum = %d\n", sum);
    printf("valid_flag = %d\n", valid_flag);

    return 0;    
}