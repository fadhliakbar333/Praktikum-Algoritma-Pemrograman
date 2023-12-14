/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	int detik, menit, jam, sisa_detik;
	
	// Memasukkan jumlah waktu dalam detik
	printf("Masukkan jumlah waktu dalam detik: ");
	scanf("%d", &detik);
	
	jam = detik / 3600;
	sisa_detik = detik % 3600;
	menit = sisa_detik /60;
	sisa_detik = sisa_detik % 60;
	
	// Menampilkan hasil
	printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, sisa_detik);
	
	return 0;
}
