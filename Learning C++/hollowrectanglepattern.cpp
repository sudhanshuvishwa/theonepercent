#include<iostream>
int main()
{
    int a,b;
    std::cout<<"Enter number of rows and columns respectively"<<std::endl;
    std::cin>>a>>b;
    size_t i,j;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
           if(i==0 || i==a-1 ){
            std::cout<<"*";
           }
           else{
            if(j==0 || j==b-1){
                std::cout<<"*";
            }
            else{
            std::cout<<" ";    
            }
           }
        }
        std::cout<<std::endl;
    }

}