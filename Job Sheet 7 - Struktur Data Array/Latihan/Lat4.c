#include <stdio.h>

int main(){
	// Membuat array kosong
	int nilai[5];
	
	// Mengisi array
	nilai[0] = 32;
	nilai[1] = 42;
	nilai[2] = 76;
	nilai[3] = 31;
	nilai[4] = 57;
	
	// Mencetak isi array dengan perulangan
	int i;
	for(i = 0; i < 5; i++){
		printf("Nilai ke-1: %d\n", nilai[i]);
	}
}


