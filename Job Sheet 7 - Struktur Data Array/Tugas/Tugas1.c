/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){

	int nilai[20];
	int total = 0;
	float rata_rata;
	int i;
	
	// Mengisi nilai mahasiswa
	printf("Masukkan nilai dari 20 mahasiswa: \n");
	for (i = 0; i < 20; i++){
		printf("Mahasiswa %d: ", i + 1);
		scanf(" %d", &nilai[i]);
		total += nilai[i];
	}
		
    // Menghitung rata-rata
    rata_rata = (float)total / 20;
    
    // Menampilkan rata-rata
    printf("Rata-rata nilai mahasiswa: %.2f\n", rata_rata);
    
    return 0;
}
