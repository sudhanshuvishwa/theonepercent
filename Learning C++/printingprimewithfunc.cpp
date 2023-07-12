#include<iostream>
#include<math.h>

bool isprime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int num1,num2;
    std::cout<<"Enter number 1 and 2 respectively"<<std::endl;
    std::cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        if(isprime(i)){
            std::cout<<i<<std::endl;
        }
    }
    return 0;
}

