#include<iostream>

int main(){
    int m;
    int n{};
    int a(2);
    int b(2.3);
    int c{2};
    int d= 23;
    int e = 2.3;

    std::cout<<m<<std::endl;
    std::cout<<n<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<d<<std::endl;
    std::cout<<e<<std::endl<<std::endl;
    std::cout<<sizeof(e)<<std::endl;
    int f {d+a};
    int g = d+a;
    std::cout<<f<<std::endl;
    std::cout<<g<<std::endl;
    std::cout<<sizeof(int)<<std::endl; 
    return 0;
}