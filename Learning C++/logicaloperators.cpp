#include<iostream>

int main(){
    int a{45};
    int b{20};
    int c{11};

 
    std::cout<< std::endl;
    std::cout<<std::boolalpha;

    std::cout<<"(a>b)&&(a>c):"<<((a > b) && ( a > c))<<std::endl;
    std::cout<<"(a==b)||(b<=c):"<<((a==b)||(b<=c))<<std::endl;
    std::cout<<"(a<b)||(a>c):"<<((a>b)||(a>c))<<std::endl;
    std::cout<<"(c>b)||(a<c):"<<((c>b)||(a<c))<<std::endl;
    std::cout<<"(a>c)&&(c>=a):"<<((a>c)&&(c>=a))<<std::endl;
    std::cout<<"(a>b)&&(a>=c):"<<((a>b)&&(a>=c))<<std::endl;
    std::cout<<"(!a)&&(a==b):"<<((!a)&&(a==b))<<std::endl;
    std::cout<<"(!a)&&(a==c):"<<((!a)&&(a==c))<<std::endl;

}
