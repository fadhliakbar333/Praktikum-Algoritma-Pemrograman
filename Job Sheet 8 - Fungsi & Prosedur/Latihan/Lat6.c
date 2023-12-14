#include <stdio.h>

void kali_dua(int *num){
	*num = *num * 2;
}

int main(){
	int angka = 9;
	
	// Memanggil fungsi
	kali_dua(&angka);

	// Mencetak isi variabel
	// Setelah fungsi dipanggil
	printf("Isi variabel angka = %d\n", angka);
}
