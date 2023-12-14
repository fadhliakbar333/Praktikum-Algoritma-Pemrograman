/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	int n = 5; // Jumlah baris
	int i, j;
	
	for (i = 1; i <= n; i++){
		int val = i; // Nilai awal
		for (j = 1; j <= i; j++){
			printf("%d ", val);
			val += i; // Menambahkan bilangan sesuai dengan jumlah baris
		}
		printf("\n");
	}
	
	return 0;
}
