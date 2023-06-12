#include<stdio.h>
#include<stdlib.h>

double cube(double num);
int main(){
    printf(" cube is %f", cube(4.0));
}
double cube(double num){
    double result;
    result = num*num*num;
    return result;
}