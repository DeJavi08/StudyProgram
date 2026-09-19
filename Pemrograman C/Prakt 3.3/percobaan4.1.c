// Program dengan logika else-if
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
        "5. Jumat\n"
        "6. Sabtu\n"
        "7. Minggu\n"
    );
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilih);

    if (pilih == 1){
        hari = "Senin";
    } else if (pilih == 2){
        hari = "Selasa";
    } else if (pilih == 3){
        hari = "Rabu";
    } else if (pilih == 4){
        hari = "Kamis";
    } else if (pilih == 5){
        hari = "Jumat";
    } else if (pilih == 6){
        hari = "Sabtu";
    } else if (pilih == 7){
        hari = "Minggu";
    } else {
        valid = 0;
    }

    if(valid){
        printf("Pilihan Anda = %s\n", hari);
    } else {
        printf("Pilihan Anda tidak valid");
    }

    return 0;
}