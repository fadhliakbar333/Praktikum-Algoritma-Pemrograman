#include <stdio.h>

int main(){
	char buff[255];
	FILE *fptr;
	
	// Membuka file
	if ((fptr = fopen("puisi.txt", "r")) == NULL){
		printf("Error: File tidak ada!");
		// Tutup program karena file gak ada
		exit(1);
	}
	
	// Baca isi file dengan gets lalu simpan ke buff
	fgets(buff, 255, fptr);
	// Tampilkan isi file 
	printf("%s", buff);
	
	// Tutup file 
	fclose(fptr);
}
