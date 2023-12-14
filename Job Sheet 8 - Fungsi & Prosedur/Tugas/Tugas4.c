/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

// Fungsi untuk menghitung besar potongan/diskon
void potong(float total_pembelian) {
    float diskon = 0;

    if (total_pembelian < 1000000) {
        diskon = 0;
    } else if (total_pembelian >= 1000000 && total_pembelian < 3000000) {
        diskon = 0.2 * total_pembelian;
    } else {
        diskon = 0.35 * total_pembelian;
    }

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : %.2f\n", total_pembelian);
    printf("Besar Diskon : %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : %.2f\n", total_pembelian - diskon);
}

int main() {
    float total_pembelian;

    printf("Masukkan Total Pembelian (Rp.): ");
    scanf("%f", &total_pembelian);

    potong(total_pembelian);

    return 0;
}
