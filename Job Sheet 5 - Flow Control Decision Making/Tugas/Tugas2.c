/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

int main() {
    double total_pembelian, diskon, cashback;
    
    // Input total pembelian dari pengguna
    printf("Masukkan total pembelian (dalam Rp): ");
    scanf("%lf", &total_pembelian);
    
    // Menghitung diskon sesuai ketentuan
    if (total_pembelian <= 75000) {
        diskon = 0.05 * total_pembelian;
    } else if (total_pembelian <= 125000) {
        diskon = 0.15 * total_pembelian;
    } else {
        diskon = 0.25 * total_pembelian;
        cashback = 5000; // Cashback sebesar Rp 5.000
    }
    
    // Menghitung total yang harus dibayarkan setelah diskon dan cashback
    double total_setelah_diskon = total_pembelian - diskon + cashback;
    
    // Menampilkan total pembelian, diskon, cashback, dan total yang harus dibayarkan
    printf("Total pembelian: Rp %.2lf\n", total_pembelian);
    printf("Diskon: Rp %.2lf\n", diskon);
    printf("Cashback: Rp %.2lf\n", cashback);
    printf("Total yang harus dibayarkan: Rp %.2lf\n", total_setelah_diskon);
    
    return 0;
}

