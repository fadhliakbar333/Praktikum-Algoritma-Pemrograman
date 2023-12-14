#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main(){
	enum hari sekarang;
	sekarang = SABTU;
	printf("Sekarang hari ke-%d", sekarang + 1);
}
