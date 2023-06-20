#include<iostream>

int sum1(int a ,int b){
    int sum = a + b;
    return sum;
}


int main(){
    int num1{2};
    int num2{2};

    std::cout<< "Num1: " <<num1<<std::endl;
    std::cout<< "num2: "<<num2<<std::endl;
    int sum = num1+num2;
    std::cout<<"Sum :"<<sum<<std::endl;
    sum = sum1(233,4);
    std::cout<<"sum :"<<sum<<std::endl;
    sum= sum1(200,300);
    std::cout<<"sum :"<<sum<<std::endl;
    std::cout<<"sum :"<<sum1(900,200)<<std::endl;
   return 0;
}
