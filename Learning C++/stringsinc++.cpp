#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string s;
    getline(std::cin,s);
    sort(s.begin(),s.end());
    std::cout<< s;
    return 0;
}