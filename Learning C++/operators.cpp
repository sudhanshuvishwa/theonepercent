#include<iostream> 
int main(){
    int num1{};
    int num2{};
    std::cout<<"Enter Number 1 :";
    std::cin>>num1;
    std::cout<<"Enter Number 2 :"5;
    std::cin>>num2;
    
    auto add =  num1 +num2;
    auto sub = num1 - num2;
    auto modulo = num1 % num2;
    auto division = num1/num2;
    std::cout<<"addition:"<<add<<std::endl;
    std::cout<<"sub:"<<sub<<std::endl;
    std::cout<<"Modulo:"<<modulo<<std::endl;
    std::cout<<"division:"<<division<<std::endl;

    return 0;
}