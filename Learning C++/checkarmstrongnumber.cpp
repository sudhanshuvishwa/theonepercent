#include<iostream>
#include<math.h>

int main(){
    int num{};
    std::cout<<"Enter the number"<<std::endl;
    std::cin>>num;
    int originaln=num;
    int reverse=0;
    while(num>0)
    {
        int lastdigit =  num%10;
        reverse = reverse + lastdigit*lastdigit*lastdigit;
        std::cout<<reverse<<std::endl;
        num = num/10;
    }
    if(reverse==originaln){
        std::cout<<"Yes the number is armstrong number : "<<reverse<<std::endl;
    }else{
        std::cout<<"No, the number is not armstrong number : "<<reverse<<std::endl;
    }

}   