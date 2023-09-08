#include<iostream>
bool sorted(int arr[], int num){
    if(num ==1 ){
        return true;
    }
    bool previoussorted = sorted(arr+1,num-1);
    return (arr[0]<=arr[1]&& previoussorted);
}
int main(){
    int arr[]={1,1,3,4,5};
    std::cout<<sorted(arr,5)<<std::endl;
}