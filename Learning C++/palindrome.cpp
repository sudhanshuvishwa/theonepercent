#include<iostream>
#include<string>
int main()
{
    std::string a ="nitin";
    int palin = 0;
    int len=a.length()-1;
    for(int i=0;i < a.length()-1;i++){
        if(a[i]==a[len]){
            palin = 1;
            len = len-1;
        }
    }
    std::cout<<palin<<std::endl;
    return 0;
}