#include<stdio.h>
#include<stdlib.h>

int main(){
    char arr[]="abcde";
    int i;
    scanf("%s",&arr);
    for (i=0;i<6;i++){
        printf("%c\n",arr[i]);
    }
}