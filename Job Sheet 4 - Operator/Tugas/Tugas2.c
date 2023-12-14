/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	char nama_pembeli[77];
	char nama_barang[77];
	float harga_barang_satuan;
	int jumlah_barang;
	float harga_total;
	
	// Meminta input nama pembeli
	printf("Masukkan nama pembeli: ");
	scanf("%s", nama_pembeli);
	
	// Meminta input nama barang 
	printf("Masukkan nama barang: ");
	scanf("%s", nama_barang);
	
	// Meminta input harga barang satuan
	printf("Masukkan harga barang satuan: ");
	scanf("%f", &harga_barang_satuan);
	
	// Meminta input jumlah barang yang dibeli
	printf("Masukkan jumlah barang yang dibeli: ");
	scanf("%d", &jumlah_barang);
	
	// Menghitung harga total
	harga_total = harga_barang_satuan * jumlah_barang;
	
	// Menampilkan hasil
	printf("\n===== Struk Pembelian =====\n");
	printf("Nama Pembeli: %s\n", nama_pembeli);
	printf("Nama Barang: %s\n", nama_barang);
	printf("Harga Barang Satuan: %.2f\n", harga_barang_satuan);
	printf("Jumlah Barang: %d\n", jumlah_barang);
	printf("Harga Total: %.2f\n", harga_total);
	
	return 0;
}
