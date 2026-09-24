// Program dengan logika switch-case
#include <stdio.h>

int main(void){
    int pilih, valid = 1;
    char *hari;

    puts("Pilih hari yang Anda inginkan");
    printf(
        "1. Senin\n"
        "2. Selasa\n"
        "3. Rabu\n"
        "4. Kamis\n"
        "5. Jum'at\n"
        "6. Sabtu\n"
        "7. Minggu\n"
    );
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilih);

    switch(pilih) {
        case 1: 
            hari = "Senin"; 
            break;

        case 2: 
            hari = "Selasa"; 
            break;

        case 3: 
            hari = "Rabu"; 
            break;

        case 4: 
            hari = "Kamis"; 
            break;

        case 5: 
            hari = "Jum'at"; 
            break;

        case 6: 
            hari = "Sabtu"; 
            break;

        case 7: 
            hari = "Minggu"; 
            break;
            
        default: 
            valid = 0; 
    }

    if(valid){
        printf("Pilihan Anda = %s\n", hari);
    } else {
        printf("Pilihan Anda tidak valid");
    }

    return 0;
}
