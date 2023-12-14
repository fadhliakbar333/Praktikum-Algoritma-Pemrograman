/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

int main() {
    char proses;
    double num1, num2;

    printf("Pilihan operasi:\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");
    printf("Pilih operasi (a/b/c/d/e): ");
    scanf(" %c", &proses);

    printf("Masukkan dua bilangan: ");
    scanf("%lf %lf", &num1, &num2);

    switch (proses) {
        case 'a':
            printf("Hasil penjumlahan: %.2lf\n", num1 + num2);
            break;
        case 'b':
            printf("Hasil pengurangan: %.2lf\n", num1 - num2);
            break;
        case 'c':
            printf("Hasil perkalian: %.2lf\n", num1 * num2);
            break;
        case 'd':
            if (num2 != 0) {
                printf("Hasil pembagian: %.2lf\n", num1 / num2);
            } else {
                printf("Pembagian dengan nol tidak diizinkan.\n");
            }
            break;
        case 'e':
            if (num2 != 0) {
                printf("Hasil bagi bulat: %.2lf\n", (int)num1 / (int)num2);
            } else {
                printf("Pembagian dengan nol tidak diizinkan.\n");
            }
            break;
        default:
            printf("Operasi tidak valid.\n");
    }

    return 0;
}

