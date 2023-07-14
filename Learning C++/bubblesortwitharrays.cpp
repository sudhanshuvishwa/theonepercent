#include<iostream>

int main(){
    int size{};
    std::cout<<"Enter the size of array : ";
    std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }

    int counter=1;
    while(counter < size){
        for(int i=0;i<size-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]= temp;
            }
        }
        counter++; 
    }

    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}