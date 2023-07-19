#include<iostream>

int main(){
    int n;
    std::cout<<"Enter size : ";
    std::cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           for(int k=i;k<j;k++){
                std::cout<<a[j]<<" ";
           }
           std::cout<<std::endl;
        }
    }
}