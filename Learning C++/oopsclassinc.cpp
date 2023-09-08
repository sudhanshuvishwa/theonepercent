
#include<iostream>
#include<string>

class scooty {
    int number;
public:
    std::string name;
    int mfgdate;
    std::string owner;
    std::string place;
    
    void setNumber(int a){
        a = number;
    }
    void getNumber(){
        std::cout<< number;
    }
    void printinfo(){
        std::cout<<mfgdate<<std::endl;
    }
};

int main(){
    scooty fas;
    std::cin>>fas.mfgdate;
    
    fas.printinfo();
    return 0;
}
