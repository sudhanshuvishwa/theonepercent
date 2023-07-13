#include<iostream>

int binarysearch(int arr[] ,int n, int key){
    int s = 0;
    int e = n;
    
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e =mid-1;
        }
        else{
            s=mid+1;   
        }
    }
    return -1;
}


int main(){
    int size{};
    std::cout<<"Enter the size of array : ";
    std::cin>>size;
    int arr[size];
    for(int i = 0 ; i<size;i++){
        std::cin>>arr[i];
    }
    int key{};
    std::cout<<"Enter the key : ";
    std::cin>>key;

    std::cout<<binarysearch(arr,size,key);
}
