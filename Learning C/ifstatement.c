#include<stdio.h>
#include<stdlib.h>

int max(int num1, int num2)
{
    int result;
    if(num1>num2){
        result= num1;
    }
    else {
        result=num2;
    }
    return result;
}
int maxofthree(int num1,int num2,int num3){
    int result;
    if(num1>= num2 && num1>=num3){
        result= num1;
    }
    else if (num2>=num1 && num2>=num3){
        result = num2;
    }
    else {
        result = num3;
    }
}
int main (){
    printf("max number : %d\n", max(4,3));
    printf("max of three : %d", maxofthree(11,22,43));
  
    return 0;
} 