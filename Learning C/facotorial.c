#include<stdio.h>

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factn1= fact(n-1);
    int fact= factn1*n;
    return fact;
}

int main(){
    printf("%d",fact(5));
    return 0;
}