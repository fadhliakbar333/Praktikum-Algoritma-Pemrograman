/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

// Fungsi perkalian
int perkalian(int a, int b){
	if (b == 1){
		return a;
	} else {
		return a + perkalian(a, b - 1);
	}
	
}

int main(){
	int angka1 = 12;
	int angka2 = 6;
	int hasil = perkalian(angka1, angka2);
	
	// Menampilkan hasil
	printf("%d x %d = %d\n", angka1, angka2, hasil);
	
	return 0;
}
