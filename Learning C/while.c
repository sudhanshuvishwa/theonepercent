#include<stdio.h>
#include<stdlib.h>

int main (){
    int luckynumber = 3;
    int guess=0;
    int guessLimit;
    int guesscount=0;
    int outofguess=0;

    printf("Enter Guess Limit : ");
    scanf("%d", &guessLimit);
    while(guess != luckynumber && outofguess==0){
        if(guesscount<guessLimit){
            printf("enter your guess : ");
            scanf("%d",&guess);
            guesscount++;
        }
        else{
            outofguess=1;
        }
    }
    if(outofguess==1){
        printf("you lost\n");
    }
    else{
    printf("You guessed right");
    }
    return 0 ;


}