#include<iostream>
#include<climits> 

int main(){
    int n;
    std::cout<<"Input size of array : ";
    std::cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }

    const int indexN= 10000;
    int idx[indexN];
    
    for(int i=0;i<indexN;i++){
        idx[i]=-1;
    }

    int minIndex= INT_MAX;

    for(int i=0;i<n;i++){
        if(idx[array[i]] != -1){
            minIndex=std::min(minIndex,idx[array[i]]);
        }
        else{
            idx[array[i]]=i;
        }
    }

    if(minIndex == INT_MAX){
        std::cout<<"No recurring number"<<std::endl;
    }
    else{
        std::cout<<minIndex+1<<std::endl;
    }
    return 0;  
}