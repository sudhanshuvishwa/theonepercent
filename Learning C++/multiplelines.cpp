#include<iostream>
#include<string>

int main(){
    int number;
    std::string whole_name;
     
    std::cout<<"Enter your whole name and number :"<<std::endl;

    std::getline(std::cin,whole_name);
    std::cin>>number;
    std::cout<<"Your name is "<< whole_name<<" and your number is  : "<<number<<std::endl;
    return 0;
} 