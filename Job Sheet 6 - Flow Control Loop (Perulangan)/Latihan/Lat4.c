#include <stdio.h>

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	// Perulangan while
	while(ulangi == 'y'){
		printf("Apakah kamu mau mengulang?\n");
		printf("Jawab (y/t): ");
		scanf(" %c", &ulangi);
		
		// Increment counter
		counter++;
	}
	
	printf("\n\n----------\n");
	printf("Perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
}
