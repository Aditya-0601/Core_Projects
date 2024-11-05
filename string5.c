//Define function librarys
#include<stdio.h>
#include<string.h>
//fuunction define 
int space(char *str);

int main(){
    char str[100];
    int a;
    printf("Enter the string:");
    scanf("%[^\n]", str);  //new format specifier for reading all word in an single line
    
    //Calling of space function
    a=space(str);
    printf("Number of Words in the string is:%d",a);

    return 0;
}

int space(char str[]){
    int count=0;
    int i=0;
    int space=1;
    
    while(str[i]!='\0'){
        if(str[i]==' '){
            space=1;
        }
        else{
            if(space){
                count++;
                space=0;
            }
        }
         i++;
    }
    return count;
}
