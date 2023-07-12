#include<iostream>
#include<cmath>

int main()
{
    int num;
    std::cout<<"Enter the Number"<<std::endl;
    std::cin>>num;
    int count{0};
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            count++;
        }
    }
    if(count<=2){
        std::cout<<"This number is a prime number"<<std::endl;
    }
    else{
        std::cout<<"This number is not a prime number"<<std::endl;
    }
    return 0;
}
