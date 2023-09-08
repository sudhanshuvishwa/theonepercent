#include<iostream>

int sum(int num){
    if(num==0){
        return 0;
    }
    int previoussum=sum(num-1);
    return num + previoussum;
}

int main(){
    int num;
    std::cin>>num;
    std::cout<<sum(num)<<std::endl;
}