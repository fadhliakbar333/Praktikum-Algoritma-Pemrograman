/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include<stdio.h>

int main(){
	int minimal_saldo = 50000; // Saldo minimal
	int saldo = 175000; // Saldo awal
	int pilihan;
	int jumlah_transaksi;
	
	printf("No Rek : 0123\n");
	printf("Nama Akun : Hattori\n");
	printf("Saldo ATM : Rp. %d\n");
	
	do{
		printf("ATM Menu\n");
		printf("1. Cek Saldo\n");
		printf("2. Setoran\n");
		printf("3. Penarikan\n");
		printf("4. Exit\n");
		printf("Pilih Menu (1/2/3/4): ");
		scanf(" %d", &pilihan);
		
		switch (pilihan){
			case 1:
				printf("Saldo Hattori saat ini: %d\n", saldo);
				break;
			case 2:
				printf("Masukkan jumlah setoran: Rp. ");
				scanf(" %d", &jumlah_transaksi);
				saldo += jumlah_transaksi;
				printf("Setoran berhasil. Saldo saat ini: Rp. %d\n", saldo);
				break;
			case 3:
				printf("Masukkan jumlah penarikan: Rp. ");
				scanf(" %d", &jumlah_transaksi);
				if (saldo - jumlah_transaksi >= minimal_saldo){
					saldo -= jumlah_transaksi;
					printf("Penarikan berhasil. Saldo saat ini: Rp. %d\n", saldo);
				}
				else{
					printf("Saldo anda tidak mencukupi untuk melakukan penarikan.\n");
				}
				break;
			case 4:
				printf("Terimakasih telah menggunakan ATM. Sampai jumpa!\n");
				break;
			default:
				printf("Pilihan menu tidak valid.\n");
				
		}
	}
	while (pilihan != 4);
	
	return 0;
}
