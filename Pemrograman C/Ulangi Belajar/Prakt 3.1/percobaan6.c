#include <stdio.h>

int main (void) {
    int bil;

    puts("[Program Range 1-100]");
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);
    
    if(bil >= 1 && bil <= 100)
    printf("%d ada dalam range 1-100", bil);
    else
    printf("%d ada di luar range 1-100", bil);

    return 0;
}