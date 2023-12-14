/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	int durasi = 3; // Dalam jam
	int tarif_pertama = 15000; // Tarif 1 jam pertama
	float tarif_berikutnya = 0.5 * tarif_pertama; // Tarif jam berikutnya (50% dari tarif pertama)
	
	// Menghitung total biaya
	int total_biaya = tarif_pertama + (durasi - 1) * tarif_berikutnya;
	
	// Menampilkan hasil
	printf("Total biaya untuk menyewa film selama %d jam adalah Rp %d\n", durasi, total_biaya);
	
	return 0;
}
