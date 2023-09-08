#include<iostream>
int main(){
   
    int array[3];
    for(int i=0;i<3;i++){
        std::cin>>array[i];
    }
    for(int i=0;i<3;i++){
        std::cout<<*(array+i)<<std::endl;
    }
    int *arrayptr;
    arrayptr=array;
    for(int i=0;i<3;i++){
        std::cout<<*arrayptr<<std::endl;
        arrayptr++;
    }
    
}