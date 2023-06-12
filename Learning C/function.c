#include<stdio.h>
#include<stdlib.h>

void sayhi(){
    printf("hello user\n");
}
void name(char name[], int age){
    printf("hello %s and %d \n",name,age);
}
int main()
{
    sayhi();
    name("suddo", 40);
    name("karma",0);
    return 0;
}

