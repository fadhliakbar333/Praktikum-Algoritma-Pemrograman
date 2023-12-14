#include <stdio.h>

int main(){
	char buff[255];
	char text[255];
	int i;
	FILE *fptr;
	
	// Membuka file untuk ditulis
	fptr = fopen("puisi.txt", "w");
	
	for(i = 0; i < 5; i++){
		
		// Mengambil input dari user
	    printf("Isi baris ke-%d: ", i);
	    fgets(text, sizeof(text), stdin);
	
	    // Menulis ke text ke file
	    fputs(text, fptr);
	}
		
	printf("File berhasil ditulis\n");
	
	// Tutup file setelah ditulis
	fclose(fptr);
	
	// Buka kembali file untuk dibaca
	fptr = fopen("puisi.txt", "r");
	
	// Buka isi file dengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("Isi filenya sekarang: %s", buff);
	}
	
	// Tutup file
	fclose(fptr);
}
