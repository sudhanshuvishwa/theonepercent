#include<iostream>

int powerofn(int n, int power){
    if(power==0){
        return 1;
    }
    int previouspower= powerofn(n,power-1);
    return n * previouspower;
}

int main(){
    int num;
    std::cin>>num;
    int power;
    std::cin>>power;

    std::cout<<powerofn(num,power)<<std::endl;
    return 0; 
}