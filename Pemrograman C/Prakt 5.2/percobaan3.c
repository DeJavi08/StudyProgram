#include <stdio.h>

int prima(int);

int main(){
    int x;
    puts("[Program Menentukan Prima]");
    printf("Masukkan bilangan: ");
    scanf("%d", &x);
    
    if(prima(x) == 1){
        printf("%d adalah bilangan prima\n", x);
    } else {
        printf("%d bukan bilangan prima\n", x); 
    }
    
    return 0;
}

int prima(int bil){
    if (bil <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= bil; i++) {
        if (bil % i == 0) {
            return 0;
        }
    }
    
    return 1;
}
