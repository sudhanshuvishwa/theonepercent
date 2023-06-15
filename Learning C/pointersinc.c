#include<stdio.h>
#include<stdlib.h>

int main(){
    int age = 30;
    int *ptr=&age;
    printf("%d\n", *ptr);
    printf("%d", *&*ptr);
}