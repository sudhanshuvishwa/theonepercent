#include<iostream>

int factorial(int num){
    int factorial = 1;
    int factorial2{};
    for(int i= 2;i<=num;i++){
        factorial = i* factorial;
    }
    return factorial;
}
int main(){
    int num;
    std::cout<<"Enter factorial number : ";
    std::cin>>num;

    int fact=factorial(num);
    std::cout<<fact<<std::endl;
    return 0;
}