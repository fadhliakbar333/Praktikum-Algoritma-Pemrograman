/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>

int main() {
    char str[] = "BORLAND";
    char *ptr = str;

    while (*ptr != '\0') {
        printf("%s\n", ptr);
        ++ptr;
    }

    return 0;
}
