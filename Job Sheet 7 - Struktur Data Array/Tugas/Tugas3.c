/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>
#include <string.h>

int main() {
    // Definisikan username dan password yang benar
    char correctUsername[] = "Abay";
    char correctPassword[] = "Albedoo";

    // Variabel untuk menyimpan input pengguna
    char enteredUsername[20];
    char enteredPassword[20];

    // Meminta pengguna untuk menginput username
    printf("Masukkan username: ");
    scanf("%s", enteredUsername);

    // Meminta pengguna untuk menginput password
    printf("Masukkan password: ");
    scanf("%s", enteredPassword);

    // Memeriksa apakah username dan password benar
    if (strcmp(enteredUsername, correctUsername) == 0 && strcmp(enteredPassword, correctPassword) == 0) {
        // Jika benar, tampilkan notifikasi berhasil login
        printf("Berhasil login\n");
    } else {
        // Jika salah, tampilkan notifikasi password salah
        printf("Password salah\n");
    }

    return 0;
}
