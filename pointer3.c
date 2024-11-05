#include<stdio.h>

void reverce(int n,int *arr){
    int *ptr = arr + n - 1;
    while(ptr>=arr){
        printf("%d\n",*ptr);
        ptr--;
    }
}

int main(){
    int n;
    printf("Enter the Size of the array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d",&arr[i]);
    }   
    reverce(n,arr);
}