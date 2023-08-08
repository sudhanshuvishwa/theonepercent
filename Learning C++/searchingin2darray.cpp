#include<iostream>

int main(){
    int n{},m{};
    std::cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cin>>arr[i][j];
        }
    }

    int targetnum{};
    std::cout<<"enter the num to find : ";
    std::cin>>targetnum;

    bool flag=false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==targetnum){
                std::cout<<"target found : "<<targetnum<<" at index : "<<i<<" "<<j<<std::endl;
                flag=true;
            }
        }
    }
    if(flag==false){
        std::cout<<"element not found"<<std::endl;
    }

}