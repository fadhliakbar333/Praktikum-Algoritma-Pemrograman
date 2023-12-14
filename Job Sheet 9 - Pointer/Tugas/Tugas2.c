/*created by : Fadhli Akbar
		NIM  : 23343036 */

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Masukkan kalimat: ");
    fgets(sentence, 100, stdin);
    printf("Kebalikannya: ");
    
    int i;
    for(i=strlen(sentence)-1; i>=0; i--) {
        printf("%c", sentence[i]);
    }
    return 0;
}
