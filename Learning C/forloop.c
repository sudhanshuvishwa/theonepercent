#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int i ;
    int luckynumber[5] ;

    for (i=0;i<5;i++){
        printf("enter array: ");
        scanf("%d",&luckynumber[i]);
    }
    
    for (i=0;i<5;i++){
        printf("%d\n",luckynumber[i]);
    }
}