/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	float celcius, kelvin, fahrenheit, reamur;
	
	// Meminta input suhu dalam Celcius
	printf("Input suhu (dalam Celcius): ");
	scanf("%f", &celcius);
	
	// Menghitung suhu dalam Kelvin, Fahrenheit, dan Reamur
	kelvin = celcius + 273.15;
	fahrenheit = (celcius * 1.8) + 32;
	reamur = celcius * 0.8;
	
	// Menampilkan hasil konversi
	printf("Suhu dalam Kelvin: %.2f\n", kelvin);
	printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
	printf("Suhu dalam Reamur: %.2f\n", reamur);
	
	return 0;
}
