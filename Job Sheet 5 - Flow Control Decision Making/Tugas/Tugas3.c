/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>
#include <math.h>

int main() {
    char pilihan;
    double luas = 0.0;

    printf("Pilihan rumus untuk menghitung luas permukaan:\n");
    printf("a) Rumus Luas Permukaan Bola\n");
    printf("b) Rumus Luas Permukaan Kubus\n");
    printf("c) Rumus Luas Permukaan Balok\n");
    printf("d) Rumus Luas Permukaan Tabung\n");
    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan);

    switch (pilihan) {
        case 'a': // Luas Permukaan Bola
        {
            double jari_jari;
            printf("Masukkan jari-jari bola: ");
            scanf("%lf", &jari_jari);
            luas = 4 * M_PI * pow(jari_jari, 2);
            break;
        }
        case 'b': // Luas Permukaan Kubus
        {
            double sisi;
            printf("Masukkan panjang sisi kubus: ");
            scanf("%lf", &sisi);
            luas = 6 * pow(sisi, 2);
            break;
        }
        case 'c': // Luas Permukaan Balok
        {
            double panjang, lebar, tinggi;
            printf("Masukkan panjang, lebar, dan tinggi balok: ");
            scanf("%lf %lf %lf", &panjang, &lebar, &tinggi);
            luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
            break;
        }
        case 'd': // Luas Permukaan Tabung
        {
            double jari_jari, tinggi;
            printf("Masukkan jari-jari dan tinggi tabung: ");
            scanf("%lf %lf", &jari_jari, &tinggi);
            luas = 2 * M_PI * pow(jari_jari, 2) + 2 * M_PI * jari_jari * tinggi;
            break;
        }
        default:
            printf("Pilihan tidak valid.\n");
            return 1;
    }

    printf("Luas permukaan: %.2lf\n", luas);

    return 0;
}

