#include<iostream>

int  main(){
    int size{};
    std::cout<<"Input size of array : ";
    std::cin>>size;

    int array[size];
    for(int i = 0;i<size;i++){
        std::cin>>array[i];
    }

    int ans =2;
    int pd= array[1]-array[0];
    int j=2;
    int current = 2;

    while(j<size){
        if(pd==array[j]-array[j-1]){
            current++;
        }
        else{
            pd=array[j]-array[j-1];
            current=2;
        }
        ans= std::max(ans,current);
        j++;
    }
    std::cout<<ans<<std::endl;
    return 0;

}