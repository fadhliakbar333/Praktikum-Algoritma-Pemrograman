/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

int main() {
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas;
    float nilai_akhir;

    // Input nilai mahasiswa
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilai_kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir sesuai bobot
    nilai_akhir = 0.20 * nilai_kehadiran + 0.20 * nilai_tugas + 0.25 * nilai_uts + 0.35 * nilai_uas;

    // Menentukan keterangan hasil kelulusan
    if (nilai_akhir >= 0 && nilai_akhir <= 44) {
        printf("Nilai Akhir: %.2f (E)\n", nilai_akhir);
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        printf("Nilai Akhir: %.2f (D)\n", nilai_akhir);
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        printf("Nilai Akhir: %.2f (C)\n", nilai_akhir);
        printf("Anda lulus, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 85) {
        printf("Nilai Akhir: %.2f (B)\n", nilai_akhir);
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        printf("Nilai Akhir: %.2f (B+)\n", nilai_akhir);
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        printf("Nilai Akhir: %.2f (A)\n", nilai_akhir);
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        printf("Nilai tidak valid (di luar rentang 0-100).\n");
    }

    return 0;
}

