#include<iostream>

void fib(int a){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=0;i<=a;i++){
        std::cout<<t1<<std::endl;
        nextTerm = t1+t2;
        t1=t2;
        t2 = nextTerm; 
    }
}

int main(){
    int num;
    std::cout<<"Enter the last iteration needed"<<std::endl;
    std::cin>>num;
    fib(num);
}
