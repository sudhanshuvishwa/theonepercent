#include<stdio.h>


int fib(int n){
    int sum=0;
    int arr[1000];
    int i;
    for (i=0;i<n+1;i++){
        if(i == 0 ){
            arr[i] = 0;
            printf("%d ",arr[i]);
        }
        else if( i == 1){
            arr[i] = 1;
            printf("%d ",arr[i]);
        }
        else{
            arr[i] = arr[i-1]+ arr[i-2];
            printf("%d ",arr[i]);
        }
    }
    return arr[n];
}

int main(){
    int n;
    scanf("%d",&n);
    fib(n);
}