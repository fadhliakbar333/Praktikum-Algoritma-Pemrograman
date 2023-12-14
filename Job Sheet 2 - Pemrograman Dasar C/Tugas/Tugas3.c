/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	// Deklarasi variabel untuk panjang alas dan tinggi dalam cm
	float alas = 8.0;
	float tinggi = 5.0;
	
	// Menghitung luas segitiga
	float luas = 0.5*alas*tinggi;
	
	// Menampilkan hasil
	printf("Panjang alas: %.2f cm\n", alas);
	printf("Tinggi: %.2f cm\n", tinggi);
	printf("Luas segitiga adalah: %.2f cm^2\n", luas);
	
	return 0;
}
