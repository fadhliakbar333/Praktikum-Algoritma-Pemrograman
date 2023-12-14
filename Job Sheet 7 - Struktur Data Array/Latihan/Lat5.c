#include <stdio.h>

int main(){
	// Membuat array
	int nilai[5] = {33, 22, 11, 44, 21};
	
	// Mengambil banyaknya isi array
	int lenght = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d\n", lenght);
}
