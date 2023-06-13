#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int i ;
    int luckynumber[5] ;
    int sizeofarray;
    int sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&sizeofarray);

    for (i=0;i<sizeofarray;i++){
        printf("enter array: ");
        scanf("%d",&luckynumber[i]);
    }
    
    for (i=0;i<sizeofarray;i++){
        sum +=luckynumber[i];
    }
    printf("%d",sum);
}