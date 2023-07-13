#include<iostream>

int main(){
    int size{};
    std::cout<<"Enter the size of array : ";
    std::cin>>size;

    int arr[size];
    for(int i = 0; i<size;i++){
        std::cin>>arr[i];
    }

    for(int i = 0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
           if(arr[i] > arr[j]){
            int temp {arr[j]};
            arr[j]=arr[i];
            arr[i]=temp;
           } 
        }
    }

    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}