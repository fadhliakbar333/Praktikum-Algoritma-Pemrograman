#include <stdio.h>

// Membuat struct
struct Mahasiswa {
	char *name;
	char *address;
	int age;
};

int main(){
	
	// Menggunakan struct
	struct Mahasiswa mhs1, mhs2;
	
	// Mengisi nilai ke struct
	mhs1.name = "Abay";
	mhs1.address = "Padang";
	mhs1.age = 18;
	
	mhs2.name = "Albedoo";
	mhs2.address = "Padang";
	mhs2.age = 18;
	
	// Mencetak isi struct
	printf("## Mahasiswa 1 ##\n");
	printf("Nama: %s\n", mhs1.name);
	printf("Alamat: %s\n", mhs1.address);
	printf("Umur: %d\n", mhs1.age);
	
	printf("\n## Mahasiswa 2 ##\n");
	printf("Nama: %s\n", mhs2.name);
	printf("Alamat: %s\n", mhs2.address);
	printf("Umur: %d\n", mhs2.age);
}
