#include<iostream>
int main()
{
    int a; 
    std::cin>>a;
    size_t i,j;
    for(i=a;i>=1;i--){
        for(j=1;j<=a;j++){
            std::cout<<" * ";
        }
        std::cout<<std::endl;
    }

}