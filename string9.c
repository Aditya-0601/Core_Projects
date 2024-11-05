#include <stdio.h>
#include <string.h>

void remove_char(char *str) {
    int i,j;
    int length = strlen(str);
    for (i = 0,j=0; i <= length - 1; i++)
    {
        if (str[i] != ' ') {
            str[j++] = str[i];
    }

}
    str[j] = '\0';
}

int main() {
    char str[]={"Hello to minecraft"};

    remove_char(str);

    printf("String after removing spaces:%s\n",str);

    return 0;
}
