#include<stdio.h>


int fib(int n){
    int sum=0;
    int i;
    for (i=0;i<n;i++){
        if(i == 0 || i==2){
            sum = sum;
        }
        else if( i == 1){
            sum = sum + 1;
        }
        else{
            sum = sum + i;
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d", fib(n));
}