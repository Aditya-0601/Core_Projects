#include <stdio.h>
#include <string.h>

int main() {
    char str[]={"Hello to minecraft"};
    char *start, *end;
    int maxlen = 0, current_length = 0;

    start = str;
    end = str;

    while (*end != '\0') {
        if (*end == ' ') {
            current_length = end - start;
            if (current_length > maxlen) {
                maxlen = current_length;
            }
            start = end + 1;
        }
        end++;
    }

    // Check the last word
    current_length = end - start;
    if (current_length > maxlen) {
        maxlen = current_length;
    }

    printf("The longest word is: ");
    for (int i = 0; i < maxlen; i++) {
        printf("%c", start[i]);
    }
    printf("\n");

    return 0;
}