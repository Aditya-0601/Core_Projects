// Librarys
#include <stdio.h>
#include <string.h>
#define MAX_CHARACTERS 256//for identification of ASCII values in the string

int main() {
    char str[100];
    int char_frequency[MAX_CHARACTERS] = {0};
    int i, length;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    length = strlen(str);

    for (i = 0; i < length; i++) {
        char_frequency[str[i]]++;
    }

    printf("Frequency of each character in the string:");
    for (i = 0; i < MAX_CHARACTERS; i++) {
        if (char_frequency[i] > 0) {
            printf("%c: %d\n", i, char_frequency[i]);
        }
    }
    return 0;
}
