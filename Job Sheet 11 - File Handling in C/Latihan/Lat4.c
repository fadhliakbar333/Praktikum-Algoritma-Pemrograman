#include <stdio.h>

int main(){
	char buff[255];
	char text[255];
	FILE *fptr;
	
	// Membuka file
	fptr = fopen("puisi.txt", "w");
	
	// Mengambil input dari user
	printf("Inputkan isi file: ");
	fgets(text, sizeof(text), stdin);
	
	// Menulis ke text ke file
	fputs(text, fptr);
	
	printf("File berhasil ditulis\n");
	
	// Tutup file
	fclose(fptr);
}
