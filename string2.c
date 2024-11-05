//Define function librarys
#include<stdio.h>
#include<string.h>
//fuunction define 
int palindrome();

int main(){
    char str[100];
    printf("Enter the Word to identify:");
    scanf("%s",str);
    int a;
    //Calling the function
    a=palindrome(str);

    if(a==1){
        printf("your word is an palindrome");
    }
    else{
        printf("your word is not an palindrome");
    }
    return 0;
}

int palindrome(char str[]){
    int flag=0;
    for(int i=0;i<=strlen(str)/2;i++){
        if(str[i]!=str[strlen(str)-i-1]){
            return 0;
        }
    }
    return 1;
}
