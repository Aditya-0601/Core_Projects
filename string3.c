//Define function librarys
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char substr[100];

    printf("Enter the main string: ");
    scanf("%s",str1);
    printf("Enter the substring to search for: ");
    scanf("%s",substr);

    int str1Length = strlen(str1) - 1; 
    int substrLength = strlen(substr) - 1;

    int flag = 0;
    for (int i = 0; i <= str1Length - substrLength; i++) {
        int j;
        for (j = 0; j < substrLength; j++) {
            if (str1[i + j] != substr[j]) {
                break;
            }
        }
        if (j == substrLength) {
            flag = 1;
            printf("substring found at index %d\n", i);
            printf("substring: %s\n", &str1[i]); 
            break;
        }
    }
  if (flag==0) {
        printf("substring not found.\n");
    }

    return 0;
}
