#include <stdio.h>

int main(void) {
    float ipk;
    int umur, menikah, kacamata;

    printf("Masukkan IPK: ");
    scanf("%f", &ipk);

    if(ipk > 3.5) {
        printf("Masukkan umur: ");
        scanf("%d", &umur);

        if(umur >= 17) {
            printf("Sudah menikah? (1=ya, 0=belum): ");
            scanf("%d", &menikah);

            if(!menikah) {
                printf("Berkacamata? (1=ya, 0=tidak): ");
                scanf("%d", &kacamata);

                if(kacamata == 0) {
                    printf("Selamat Anda diterima\n");
                } else {
                    printf("Maaf, anda berkacamata\n");
                }
            } else {
                printf("Maaf, nyari yang jomblo");
            }
        } else {
            printf("Maaf, umur anda terlalu muda");
        }
    } else {
        printf("Maaf belajar lagi");
    }

    return 0;
}