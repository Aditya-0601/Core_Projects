//Define function librarys
#include<stdio.h>
#include<string.h>

//define funclion
int count(char *str);

int main(){
    char str[100];
    int a;
    printf("Enter the string:");
    scanf("%s",str);
    //Calling of count function
    printf("number of vowels in your enter string is:%d",count(str));

    return 0;
}

int count(char str[]){
    int count=0;
    char str1[5]={'a','e','i','o','u'};
    for(int i=0;i<=strlen(str)-1;i++){
        for(int j=0;j<=strlen(str1)-1;j++){
            if (str[i]==str1[j]){
                count++;
            }
        }
    }
    return count;
}