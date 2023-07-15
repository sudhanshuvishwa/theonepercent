#include<iostream>

int main(){
    int size{};
    std::cout<<"Enter the size of the array : ";
    std::cin>>size;

    int array[size+1];
    array[size]= -1;

    for(int i=0;i<size;i++){
        std::cin>>array[i];
    }
    if( size==1){
        std::cout<<"1"<<std::endl;
        return 0;
    }
    int ans=0;
    int rBday{-1}; //record breaking day
    for(int i=0;i<size;i++){
        if(array[i]>rBday &&array[i]>array[i+1]){
            ans++;
        }
        rBday = std::max(rBday,array[i]);
    }
    std::cout<<"No of record breaking days are : "<<ans<<" and the max visitors are : "<<rBday<<std::endl;
    return 0;
}