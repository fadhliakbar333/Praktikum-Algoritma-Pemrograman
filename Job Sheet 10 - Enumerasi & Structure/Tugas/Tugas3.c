/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>
#include <stdlib.h>

// Struktur untuk menyimpan informasi mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tgl_lahir[10];
    char alamat[50];
    long long hp;
};

int main() {
    struct Mahasiswa *mahasiswaArray;
    int n, i;

    // Meminta jumlah mahasiswa yang akan dimasukkan
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    // Mengalokasikan memori untuk array mahasiswa
    mahasiswaArray = (struct Mahasiswa *)malloc(n * sizeof(struct Mahasiswa));

    // Memasukkan data mahasiswa
    for (i = 0; i < n; i++) {
        printf("\nNPM: ");
        scanf("%d", &mahasiswaArray[i].npm);

        printf("NAMA: ");
        scanf("%s", mahasiswaArray[i].nama);

        printf("TGL LAHIR: ");
        scanf("%s", mahasiswaArray[i].tgl_lahir);

        printf("ALAMAT: ");
        scanf("%s", mahasiswaArray[i].alamat);

        printf("HP: ");
        scanf("%lld", &mahasiswaArray[i].hp);
    }

    // Menampilkan data mahasiswa
    printf("\nBentuk tampilan output:\n");
    for (i = 0; i < n; i++) {
        printf("%d %s %s %s %lld\n",
               mahasiswaArray[i].npm,
               mahasiswaArray[i].nama,
               mahasiswaArray[i].tgl_lahir,
               mahasiswaArray[i].alamat,
               mahasiswaArray[i].hp);
    }

    // Membebaskan memori yang dialokasikan
    free(mahasiswaArray);

    return 0;
}
