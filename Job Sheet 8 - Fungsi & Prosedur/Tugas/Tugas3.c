/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

#define PI 3.14 // Nilai PI

// Fungsi untuk menghitung luas lingkaran
float luas(float radius){
	return PI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius){
	return 2 * PI * radius;
}

int main(){
	float radius;
	
	// Menginputkan jari jari
	printf("Masukkan jari-jari lingkaran: ");
	scanf("%f", &radius);
	
	// Menampilkan hasil 
	printf("Luas lingkaran: %.2f\n", luas(radius));
	printf("Keliling lingkaran: %.2f\n", keliling(radius));
	
	return 0;
}
