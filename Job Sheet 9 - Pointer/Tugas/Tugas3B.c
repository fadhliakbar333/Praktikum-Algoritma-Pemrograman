/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

int main() {
    int Lesley = 57082;
    int Layla = &Lesley;
    int Balmond = *(&Layla) + 1;

    // a) Nilai Layla
    printf("a) Nilai Layla: %d\n", Layla);

    // b) Nilai Balmond
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}
