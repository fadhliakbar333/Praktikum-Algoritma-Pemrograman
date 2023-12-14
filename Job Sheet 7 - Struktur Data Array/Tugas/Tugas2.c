/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>;
#include <string.h>;

int main(){
	int banyak_mahasiswa;
	int i;
	
	printf("Input banyak mahasiswa: ");
	scanf(" %d", &banyak_mahasiswa);
	
	// Buat array untuk menampung nama mahasiswa
	char nama_mahasiswa[banyak_mahasiswa][50]; // Maksimal 50 karakter per nama
	
	// Meminta input nama mahasiswa
	for (i = 0; i < banyak_mahasiswa; i++){
		printf("Input nama mahasiswa %d: ", i + 1);
		scanf(" %[^\n]s", nama_mahasiswa[i]);
	}
	
	// Menampilkan nama mahasiswa
	for (i = 0; i < banyak_mahasiswa; i++){
		printf("\nNama mahasiswa ke-%d: %s\n", i + 1, nama_mahasiswa[i]);
	}
	
	return 0;
	
}
