#include<iostream>
int main(){
    size_t count = 10;
    for(int i {0};i<count;i++){
        std::cout<<i<<" : This is for loop"<<std::endl;
    }
    std::cout<<std::endl; 
    int i{};
    while( i != count){
        std::cout<<i<<" : This is while loop"<<std::endl;
        i++;
    }
    std::cout<<std::endl;
    do{
        std::cout<<i<<":This is do while loop"<<std::endl;
        i++;
    }while(i!=20);
    return 0;
}