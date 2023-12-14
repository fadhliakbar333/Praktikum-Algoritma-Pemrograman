/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enum untuk kondisi tebakan 
enum TebakKondisi {LebihBesar, LebihKecil, Tepat};

// Struct untuk menyimpan data permainan
struct DataGame {
	int targetNomor;
	int percobaan;
};

// Fungsi untuk menghasilkan nomor acak antara 1 sampai 20
int generateRandomNomor(){
	return rand() % 20 + 1;
}

// Fungsi untuk memproses tebakan dan memberikan kondisi
enum TebakKondisi prosesTebakan(int tebakan, int target) {
	if (tebakan < target) {
		printf("Nomor saya lebih besar!\n");
		return LebihKecil;
	} else if (tebakan > target) {
		printf("Nomor saya lebih kecil!\n");
		return LebihBesar;
	} else {
		printf("Selamat, Anda Benar!\n");
		return Tepat;
	}
}

int main(){
	srand(time(NULL)); // Inisialisasi seed untuk nomor acak
	
	char playAgain;
	
	do {
		struct DataGame game;
		game.targetNomor = generateRandomNomor();
		game.percobaan = 0;
		
		int percobaanUser;
		enum TebakKondisi kondisi;
		
		printf("\nTebak nomor antara 1 sampai 20: \n");
		
		do {
			printf("Masukkan tebakan anda: ");
			scanf("%d", &percobaanUser);
			
			kondisi = prosesTebakan (percobaanUser, game.targetNomor);
			game.percobaan++;
		} while (kondisi != Tepat);
		
		printf("Jumlah percobaan yg diperlukan; %d\n", game.percobaan);
		
		printf("Ingin bermain lagi? (y/n): ");
		scanf(" %c", &playAgain); 
	} while (playAgain == 'y' || playAgain == 'Y');
	
	return 0;
}
