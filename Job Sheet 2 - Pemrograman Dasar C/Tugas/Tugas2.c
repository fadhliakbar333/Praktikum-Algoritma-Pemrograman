/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	char nama[77], nim[27], programStudi[37], fakultas[17];
	float nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir;
	
	// Meminta input dari pengguna
	printf("Nama : ");
	gets(nama);
	printf("NIM : ");
	gets(nim);
	printf("Program Studi : ");
	gets(programStudi);
	printf("Fakultas : ");
	gets(fakultas);
	printf("Nilai Praktikum : ");
	scanf("%f", &nilaiPraktikum);
	printf("Nilai UTS : ");
	scanf("%f", &nilaiUTS);
	printf("Nilai UAS : ");
	scanf("%f", &nilaiUAS);
	
	// Menghitung nilai akhir
	nilaiAkhir = (0.30*nilaiPraktikum)+(0.30*nilaiUTS)+(0.40*nilaiUAS);
	
	// Menampilkan hasil nilai akhir
	printf("\nNilai Akhir : %.2f\n", nilaiAkhir);
	
	return 0;
}
