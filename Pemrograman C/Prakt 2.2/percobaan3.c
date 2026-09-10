#include <stdio.h>

int main(void)
{
    float gaji_pokok;
    char status_pasangan;
    int jumlah_anak;
    int masa_kerja;
    int hari_masuk;

    float tunjangan_pasangan;
    float tunjangan_anak;
    float thr;
    float bantuan_transport;
    float pajak;
    const float polis_asuransi = 20000.0f;
    float total_pendapatan;

    puts("[Percobaan 3] Menghitung Pendapatan Karyawan");

    printf("Masukkan gaji pokok: Rp ");
    scanf("%f", &gaji_pokok);

    printf("Apakah punya istri/suami? (y/n) : ");
    scanf(" %c", &status_pasangan);

    printf("Masukkan jumlah anak: ");
    scanf("%d", &jumlah_anak);

    printf("Masukkan masa kerja (Tahun): ");
    scanf("%d", &masa_kerja);
    printf("Masukkan jumlah hari masuk kerja (Hari): ");
    scanf("%d", &hari_masuk);

    if(status_pasangan == 'y' || status_pasangan == 'Y')
    {
        status_pasangan = 1;
    } else {
        status_pasangan = 0;
    }

    tunjangan_pasangan = status_pasangan * (0.10f * gaji_pokok);
    tunjangan_anak = jumlah_anak * (0.05f * gaji_pokok);
    thr = masa_kerja * 5000.0f;
    bantuan_transport = hari_masuk * 3000.0f;
    pajak = 0.15f * (gaji_pokok + tunjangan_pasangan + tunjangan_anak);

    total_pendapatan = (gaji_pokok + tunjangan_pasangan + tunjangan_anak + thr + bantuan_transport) - (pajak + polis_asuransi);

printf("\n================ RINCIAN PENDAPATAN ================\n");
    printf("Gaji Pokok               : Rp %12.2f\n", gaji_pokok);
    printf("Tunjangan Istri/Suami    : Rp %12.2f\n", tunjangan_pasangan);
    printf("Tunjangan Anak           : Rp %12.2f\n", tunjangan_anak);
    printf("THR                      : Rp %12.2f\n", thr);
    printf("Bantuan Transport        : Rp %12.2f\n", bantuan_transport);
    printf("----------------------------------------------------\n");
    printf("Potongan Pajak (15%%)     : Rp %12.2f\n", pajak);
    printf("Polis Asuransi           : Rp %12.2f\n", polis_asuransi);
    printf("====================================================\n");
    printf("TOTAL PENDAPATAN BERSIH  : Rp %12.2f\n", total_pendapatan);

    return 0;
}