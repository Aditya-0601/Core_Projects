//Define function librarys
#include<stdio.h>
#include<string.h>
//fuunction define 
int frequency(char *str,char str1);


int main(){
    char str[100];
    char str1;
    int a;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("Enter the Word to find it's frequency: ");
    scanf("%c",&str1);

    a=frequency(str,str1);
    printf("your enter word is repeted %d number of times",a);
}

int frequency(char str[],char str1){
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if (str1==str[i]){
            count++;
        }
        i++;
    }
    return count;
}
