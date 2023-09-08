#include<iostream>

int fib(int num){
    if(num == 0 || num ==1){
        return num;
    }
    return fib(num-1) + fib(num-2);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<fib(n)<<std::endl;
}