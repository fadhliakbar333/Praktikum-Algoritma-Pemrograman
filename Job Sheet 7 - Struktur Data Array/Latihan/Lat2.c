#include <stdio.h>

int main(){
	// Isi awal array
	char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
	
	// Mengubah isi array
	huruf[2] = 'z';
	
	// Mencetak isi array
	printf("Huruf: %c\n", huruf[2]);
}
