#include<stdio.h>


int fib(int n){
    int sum=0;
    int arr[1000];
    int i;
    for (i=0;i<n+1;i++){
        if(i == 0 ){
            arr[i] = 0;
        }
        else if( i == 1){
            arr[i] = 1;
        }
        else{
            arr[i] = arr[i-1]+ arr[i-2];
        }
    }
    return arr[n];
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d", fib(n));
}