#include<iostream>

int main(){
    int size{};
    std::cout<<"Enter the size of array : ";
    std::cin>>size;
    int arr[size];
    size_t i=0;
    for(i=0;i<size;i++){
        std::cin>>arr[i];
    }

    int key{};
    std::cout<<"Enter the key : ";
    std::cin>>key;

    for(i=0;i<size;i++){
        if(key==arr[i]){
            std::cout<<"Element Found : "<<arr[i]<<" at the index :"<<i<<std::endl;
        }
    } 
    return 0;
}