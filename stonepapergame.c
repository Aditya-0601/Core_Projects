# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>

int game(char you, char computer){

    if(you==computer)
        return -1;

    if(you=='s' && computer=='p')
        return 0;
        
        else if(you=='s' && computer=='z')
            return 1;

    if(you=='p' && computer=='s')
        return 1;
    
        else if(you=='p' && computer=='z')
            return 0;
        
    if(you=='z' && computer=='p')
        return 1;
    
        else if(you=='z' && computer=='s')
            return 0;
        
}
int main(){

    int num;
    char you;
    char computer;
    char result;

    srand(time(NULL));

    num=rand() % 100;

    if (num<33){
        computer='s';
    }
        else if (num>33 && num<66)
        {
            computer='p';
        }
            else{
                computer='z';
            }
    printf("s for stone,p for paper,z for scissors\n");
    printf("Enter your choice:");

            scanf("%C",&you);

    result=game(you,computer);

    if (result==-1){
        printf("you draw\n");
    }
        else if(result==1){
            printf("you win\n");
        }
            else{
                printf("you lose\n");
            }
                printf("you chose:%c\ncomputer chose:%c",you,computer);

                    return 0;


}        