#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int i;
    int j;
    int k;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length;) {
            if (str[i] == str[j]) {
                for (k = j; k < length - 1; k++) {
                    str[k] = str[k + 1];
                }
                length--;
            } else {
                j++;
            }
        }
    }

    str[length] = '\0';
}

int main() {
    char str[]={"Hello to minecraft"};
    removeDuplicates(str);

    printf("Word after removing duplicates: %s\n", str);

    return 0;
}
