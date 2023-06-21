#include<iostream>
int main(){
    char num1{'a'};
    char num2{65};
    char num3{'a'};
    //char num4{'asd'};

    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    std::cout<<static_cast<int>(num3)<<std::endl;
    //std::cout<<num4<<std::endl;

}