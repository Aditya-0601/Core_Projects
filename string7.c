//Define function librarys
#include<stdio.h>
#include<string.h>

//function Define
void upper(char *str);
void lower(char *str);

int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    upper(str);
    printf("Uppercase: %s", str);

    lower(str);
    printf("Lowercase: %s", str);

    return 0;
}

void upper(char *str){
    int i;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
}

void lower(char *str){
    int i;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
}
