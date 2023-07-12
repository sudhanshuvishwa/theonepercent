#include<iostream>
#include<climits>

int main(){
    int num;
    std::cout<<"Enter the number of elements: ";
    std::cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        std::cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i=0; i<num;i++){
        maxNo= std::max(maxNo,arr[i]);
        minNo= std::min(minNo,arr[i]);
    }
    std::cout<<"Max No :"<<maxNo<<std::endl;
    std::cout<<"Min No :"<<minNo<<std::endl;
    return 0;
}