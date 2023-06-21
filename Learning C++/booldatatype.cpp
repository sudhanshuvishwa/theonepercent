#include<iostream>

int main(){
    bool red_light{false};
    bool green_light{false};

    if(red_light == true){
        std::cout<<"stop"<<std::endl;
    }else if (green_light == true){
        std::cout<<"green light go"<<std::endl;
    }else{
        std::cout<<"stay"<<std::endl;
    }
    bool input{};
    std::cin>>input;
    std::cout<<std::boolalpha;
    std::cout<<input<<std::endl;
    std::cout<<sizeof(input)<<std::endl;
}