#include <stdio.h>

int main(){
	int a, b;
	
	// Pengisian nilai dengan operator =
	a = 5;
	b = 10;
	
	// Pengisian sekaligus penambahan
	b += a; // Ini sama seperti b = b + a
	printf("Hasil b += a adalah %d\n", b);
	
	// Pengisian sekaligus pengurangan 
	b -= a; // Ini sama seperti b = b - a
	printf("Hasil b -= a adalah %d\n", b);
	
	// Pengisian sekaligus perkalian 
	b *= a; // Ini sama seperti b = b * a
	printf("Hasil b *= a adalah %d\n", b);
	
	// Pengisian sekaligus pembagian 
	b /= a; // Ini sama seperti b = b / a
	printf("Hasil b /= a adalah %d\n", b);
	
	// Pengisian sekaligus sisa bagi
	b %= a; // Ini sama seperti b % a
	printf("Hasil b %= a adalah %d\n", b);
	
}
