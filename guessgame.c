#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
    int chosenumber;
    int guess;
    int guesscount=0;
    int guesslimit;
    int outofguess=0;

    printf("Enter your any number:");
    scanf("%d",&chosenumber);

    printf("Enter guess limit:");
    scanf("%d",&guesslimit);


    while(guess!=chosenumber && outofguess==0){
        if(guesscount<guesslimit){
            printf("Enter your guess:");
            scanf("%d",&guess);
            guesscount++;
        }
        else{
            outofguess=1;
        }
    }
    if(guess!=chosenumber){
        printf("Wrong choice guess again");
    }

    else if(guess==chosenumber){
        printf("you win");
    }
    else if(outofguess==1){
        printf("out of guess\nyou lost");
    }
    else{
        printf("you lost");
    }
}