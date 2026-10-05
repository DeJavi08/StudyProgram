#include <stdio.h>

int main(void) {
    int n, x = 0;

    printf("Input angka n: ");
    scanf("%d", &n);

    while (x < n) {
        x++;

        if (x % 2 == 0) 
        continue;

        if (x % 3 == 0) 
        continue;
        
        printf("%d ", x);
    }

    return 0;
}