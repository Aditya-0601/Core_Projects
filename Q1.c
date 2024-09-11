//Define function librarys
#include<stdio.h>
#include<string.h>
//fuunction define 
void reverse();

int main(){
    char str[100];
    printf("Enter the Word to reverse:");
    scanf("%s",str);
    //Calling of reverse function
    reverse(str);

    printf("your reversed word/string is:%s",str);

    return 0;
}

void reverse(char str[]){
    int start;
    int end;
    char temp;
    int len;

    len=strlen(str);
    start=0;
    end=strlen(str)-1;
    while (start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}