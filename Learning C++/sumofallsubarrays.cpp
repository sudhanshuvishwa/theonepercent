#include<iostream>

int main(){
    int size{};
    std::cout<<"Input array size: ";
    std::cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    int current=0;

    for(int i=0;i<size;i++){
        current=0;
        for(int j= i;j<size;j++){
            current +=arr[j];
            std::cout<<"sum is : "<<current<<std::endl;
        }
    }
    return 0;
}