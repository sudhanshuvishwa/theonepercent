#include<iostream>

int fact(int n)
{
    int factorial =1;
    for (int i = 2; i<=n;i++){
        factorial *=i;
    }
    return factorial;
}

int main(){
    int rows;
    std::cout<<"Enter the number of rows : ";
    std::cin>>rows;

    for(int i = 0; i<rows; i++){
        for(int j=0;j<=i;j++){
            int pattern = fact(i)/(fact(i-j)*fact(j));
            std::cout<<pattern<<" ";
        }
        std::cout<<std::endl;
    }

}