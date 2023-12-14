#include <stdio.h>

int main(){
	// Membuat array karakter untuk menyimpan password
	char password[30];
	
	printf("=== Program Login ===\n");
	printf("Masukkan password: ");
	scanf("%s", &password);
	
	// Percabangan if/else
	if(strcmp(password, "albedoo") == 0){
		printf("Selamat datang bos!\n");
	} else {
		printf("Password salah, coba lagi!\n");
	}
	
	printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}
