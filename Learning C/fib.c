#include<stdio.h>

int fib(int n){
    if(n == 0 || n == 1){
        if(n==0){
            return 0;
    }   if(n==1){
            return 1;
    }
    }
    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int fib= fib1 + fib2;
    //printf("%d %d",n,fib);
    return fib;
}
int main(){
    printf("%d",fib(7));
    return 0;
}