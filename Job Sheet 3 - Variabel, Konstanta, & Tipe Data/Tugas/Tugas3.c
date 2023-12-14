/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	const float phi = 3.14;
	float diameter = 12.0;
	float radius = diameter / 2.0;
	float volume, luasPermukaan;
	
	// Menghitung volume bola
	volume = (4.0 / 3.0) * phi * radius * radius * radius;
	
	// Menghitung luas permukaan bola
	luasPermukaan = 4.0 * phi * radius * radius;
	
	// Menampilkan hasil perhitungan 
	printf("Volume bola = %.2f cm^3\n", volume);
	printf("Luas permukaan bola = %.2f cm^2", luasPermukaan);
	
	return 0;
}
