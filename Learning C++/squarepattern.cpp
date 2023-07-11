#include<iostream>
int main()
{
    int a,b;
    std::cin>>a>>b;
    size_t i,j;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            std::cout<<" * ";
        }
        std::cout<<std::endl;
    }

}