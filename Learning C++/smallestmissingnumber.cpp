#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the size of array : ";
    std::cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }

    const int N= 100000;

    bool check[N];
    for(int i=0;i<N;i++){
        check[i]= false;
    }

    for(int i=0;i<n;i++)
    {
        if(array[i]>0)
        {
            check[array[i]]=true;
        }
    }

    int missingNum= -1;

    for(int i=1;i<N;i++){
        if(check[i]==false){
            missingNum=i;
            break;
        }
    }
    std::cout<<missingNum<<std::endl;
    return 0;
}