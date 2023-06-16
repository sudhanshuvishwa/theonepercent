#include<stdio.h>
#include<stdlib.h>

int main(){
    int age=30;
    int *ptr;
    ptr=&age;
    printf("%d\n", *ptr);
    printf("%d",age) ;
}