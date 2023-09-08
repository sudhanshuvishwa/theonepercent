#include<iostream>

int main(){
    char sen[100];
    std::cin>>sen;

    int currentlength=0;
    int maxLen=0;
    for(int i=0;i<100;i++){
        if(sen[i]==' '  ||sen[i]=='\0'){
            if(currentlength>maxLen){
               maxLen=currentlength;  
            }
            currentlength=0;
        }
     
        currentlength++;
        if(sen[i] == '\0'){
            break;
        }
         
        
    }
    std::cout<<maxLen;
}