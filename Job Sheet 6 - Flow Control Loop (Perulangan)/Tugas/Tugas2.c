/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	int i, j;
	int n = 5; // Jumlah baris
	
	// Proses pembuatan pola
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
