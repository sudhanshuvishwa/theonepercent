#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the number of characters : ";
    std::cin>>n;

    char array[n+1];
    std::cout<< "enter the sentence : ";
    std::cin>>array;

    bool check = 1;
    char reverse[n+1];
    for(int i=0;i<n+1;i++){
        if(reverse[i]!=array[n-i]){
            check=0;
            break;
        }
    }
    if (check=1){
        std::cout<<"palindrome"<<std::endl;
    }
    else{
        std::cout<<"not a palindrome"<<std::endl;
    }

}