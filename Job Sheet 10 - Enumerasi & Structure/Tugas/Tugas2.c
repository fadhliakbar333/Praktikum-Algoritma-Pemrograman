/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

// Struktur untuk menyimpan informasi tanggal
struct Tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

// Struktur untuk menyimpan informasi zodiak
struct Zodiak {
    int batas_bulan;
    const char *nama_zodiak;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
const char *tentukanZodiak(struct Tanggal tgl) {
    struct Zodiak zodiak[] = {
        {20, "CAPRICORN"},
        {19, "AQUARIUS"},
        {20, "PISCES"},
        {20, "ARIES"},
        {20, "TAURUS"},
        {21, "GEMINI"},
        {22, "CANCER"},
        {22, "LEO"},
        {22, "VIRGO"},
        {22, "LIBRA"},
        {21, "SCORPIO"},
        {21, "SAGITTARIUS"}
    };

    int i;
    for (i = 0; i < sizeof(zodiak) / sizeof(zodiak[0]); i++) {
        if (tgl.bulan == i + 1 && tgl.tanggal <= zodiak[i].batas_bulan) {
            return zodiak[i].nama_zodiak;
        }
    }

    return "Invalid";
}

int main() {
    struct Tanggal tgl;

    // Masukkan tanggal lahir
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tgl.tanggal, &tgl.bulan, &tgl.tahun);

    // Tentukan dan tampilkan zodiak
    const char *zodiak = tentukanZodiak(tgl);
    printf("Zodiak Anda adalah : %s\n", zodiak);

    return 0;
}
