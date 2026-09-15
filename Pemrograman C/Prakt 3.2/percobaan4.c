#include <stdio.h>

int main() {
    float ipk;
    int umur, menikah, kacamata;

    printf("Masukkan IPK: ");
    scanf("%f", &ipk);

    if (ipk > 3.5) {
        printf("Masukkan umur: ");
        scanf("%d", &umur);

        if (umur >= 17) {
            printf("Sudah menikah? (1=ya, 0=belum): ");
            scanf("%d", &menikah);

            if (menikah == 0) {
                printf("Berkacamata? (1=ya, 0=tidak): ");
                scanf("%d", &kacamata);

                if (kacamata == 0) {
                    printf("Selamat Anda diterima\n");
                } else {
                    printf("Maaf, mata Anda berkacamata\n");
                }
            } else {
                printf("Maaf, nyari yang jomblo!\n");
            }
        } else {
            printf("Maaf, umur Anda masih terlalu imut, sekolah dulu ya\n");
        }
    } else {
        printf("Maaf, IPK Anda kurang\n");
    }

    return 0;
}
