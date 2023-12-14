#include <stdio.h>

int main(){
	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	printf("Jawab: ");
	scanf("%d", &jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7) ? "Benar" : "Salah");
}
