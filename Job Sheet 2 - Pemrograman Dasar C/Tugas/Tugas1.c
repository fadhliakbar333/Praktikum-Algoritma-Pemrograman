/*created by : Fadhli Akbar
		NIM  : 23343036 */
		
#include<stdio.h>

int main(){
	char nama[77];
	
	printf("Hello, siapa nama lengkapmu?\n");
	
	// Menginputkan nama lengkap
	scanf("%99[^\n]", nama);
	
	// Menampilkan nama lengkap
	printf("Selamat datang %s dalam pemrograman C\n", nama);
	
	return 0;
}
