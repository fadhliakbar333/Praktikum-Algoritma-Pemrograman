/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("datamahasiswa.txt", "w"); // Membuka file untuk ditulis

    if (file == NULL) {
        printf("Gagal membuka file!");
        return 1;
    }

    int jumlahMahasiswa;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    
    int i;

    for (i = 1; i <= jumlahMahasiswa; ++i) {
        fprintf(file, "Data mahasiswa ke-%d\n", i);
        
        char nama[100], nim[20], jurusan[50], programStudi[50];

        printf("Nama: ");
        scanf(" %[^\n]s", nama);

        printf("NIM: ");
        scanf(" %[^\n]s", nim);

        printf("Jurusan: ");
        scanf(" %[^\n]s", jurusan);

        printf("Program Studi: ");
        scanf(" %[^\n]s", programStudi);

        // Menyimpan data ke dalam file
        fprintf(file, "Nama: %s\nNIM: %s\nJurusan: %s\nProgram Studi: %s\n\n", nama, nim, jurusan, programStudi);
    }

    fclose(file); // Menutup file
    printf("Data mahasiswa telah disimpan ke dalam datamahasiswa.txt\n");

    return 0;
}
