#include<stdio.h>
#include<stdlib.h>

int main(){
    char grade;
    printf("enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("you are best");
            break;
        case 'B':
            printf("you are best");
            break;
        case 'C':
            printf("you are best");
            break;
        case 'D':
            printf("you are best");
            break;
        default :
            printf("invalid grade");
            break;        
    }

}