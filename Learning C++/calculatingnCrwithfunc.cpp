#include<iostream>

int nCr(int n)
{
    int factorial=1;
    for(int i=2; i<=n;i++){
        factorial = i*factorial;
    }
    return factorial;
}


int main()
{
    int n,r;
    std::cout<<"Input N and R :"<<std::endl;
    std::cin>>n>>r;
    int finalncr = nCr(n) /(nCr(n-r)*nCr(r));
    std::cout<<finalncr<<std::endl;
    std::cout<<nCr(n) /(nCr(n-r)*nCr(r))<<std::endl;
    return 0;
}