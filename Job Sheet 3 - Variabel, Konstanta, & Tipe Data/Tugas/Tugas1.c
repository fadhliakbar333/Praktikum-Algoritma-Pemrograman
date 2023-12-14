/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	float konversi = 14250.0;
	float jumlahRupiah;
	
	// Masukkan jumlah uang dalam rupiah
	printf("Masukkan jumlah uang dalam Rupiah: ");
	scanf("%f", &jumlahRupiah);
	
	// Mengkonversi uang rupiah ke dollar
	float jumlahDollar = jumlahRupiah/konversi;
	
	// Menampilkan hasil konversi
	printf("%.2f Rupiah setara dengan %.2f Dollar.\n", jumlahRupiah, jumlahDollar);
	
	return 0;
}
