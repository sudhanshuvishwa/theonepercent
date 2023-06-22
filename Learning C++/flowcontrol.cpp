#include<iostream>

int main(){
    const int a{1};   
    const int b{2};           
    const int c{3};   
    const int d{4};
    int e{};

    std::cin>>e;

    if(e==a){
        std::cout<<a<<std::endl;
    }else if(e==d){
        std::cout<<d<<std::endl;
    }else if(e==c){
        std::cout<<c<<std::endl;
    }else if(e==b){
        std::cout<<b<<std::endl;
    }else if(e==a){
        std::cout<<a<<std::endl;
    }else{
        std::cout<<"Not stored";
    }
    return 0;
}