#include<iostream>
#include<climits>

int main(){
    int size{};
    std::cout<<"Enter the size of the arr : ";
    std::cin>>size;

    int arr[size];
    for(int i = 0;i<size;i++){
        std::cin>>arr[i];
    }    

    int index{};
    std::cout<<"Enter index till which max number is to be found : ";
    std::cin>>index;

    int maxNo= INT_MIN;
    int minNo= INT_MAX;
    for(int i= 0;i<=index;i++){
        maxNo = std::max(maxNo,arr[i]);
        
    }
    std::cout<<"The maximum number is : "<<maxNo<<std::endl;
    
    return 0;
}