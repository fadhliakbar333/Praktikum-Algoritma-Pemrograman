/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

// Fungsi untuk penjumlahan
float tambah(float a, float b){
	return a + b;
}

// Fungsi untuk pengurangan
float kurang(float a, float b){
	return a - b;
}

// Fungsi untuk perkalian
float kali(float a, float b){
	return a * b;
}

// Fungsi untuk pembagian
float bagi(float a, float b){
	if (b != 0){
		return a / b;
	} else {
		printf("Error: Pembagian dengan nol tidak dapat dilakukan.\n");
		return 0;
	}	
}

int main(){
	float angka1 = 77;
	float angka2 = 11;
	
	printf("Penjumlahan: %.2f\n", tambah(angka1, angka2));
	printf("Pengurangan: %.2f\n", kurang(angka1, angka2));
	printf("Perkalian: %.2f\n", kali(angka1, angka2));
	printf("Pembagian: %.2f\n", bagi(angka1, angka2));
	
	return 0;
}
