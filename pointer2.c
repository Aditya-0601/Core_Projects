#include<stdio.h>

int main(){
    char str[100]={};
    char *ptr;
    int count=0;


    printf("Enter your string:");
    scanf("%s",str);

    ptr=str;

    while(*ptr!='\0'){
        ptr++;
        count++;
    }
    printf("The number of letter in the string is %d",count);
}