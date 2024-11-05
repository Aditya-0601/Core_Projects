#include<stdio.h>

int main(){
    int num1;
    int num2;
    int temp;
    int *ptr1;
    int *ptr2;

    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);

    ptr1=&num1;
    ptr2=&num2;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    num1=*ptr1;
    num2=*ptr2;
    printf("First Number:%d\n",num1);
    printf("second Number:%d",num2);
}