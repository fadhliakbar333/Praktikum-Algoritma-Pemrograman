/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	float nilai_presentasi = 85;
	float nilai_praktek = 65;
	float nilai_uts = 80;
	float nilai_uas = 75;
	
	// Menghitung nilai akhir berdasarkan bobot
	float bobot_presentasi = 0.10;
	float bobot_praktek = 0.20;
	float bobot_uts = 0.30;
	float bobot_uas = 0.40;
	
	float nilai_akhir = (nilai_presentasi * bobot_presentasi) + (nilai_praktek * bobot_praktek) + (nilai_uts * bobot_uts) + (nilai_uas * bobot_uas);
	
	// Menampilkan nilai akhir
	printf("Nilai Akhir: %.2f\n", nilai_akhir);
	
	return 0;
}
