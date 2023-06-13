#include<stdio.h>
#include<stdlib.h>

int cal(int num1,int num2,char op){
    int result;
    if (op == '+' ){
        result = num1+num2;
        //printf("%d",result);
    }
    else if(op == '-'){
        result = num1-num2;
        //printf("%d",result);
    }
    else if(op == '*'){
        result = num1*num2;
        //printf("%d",result);
    }
    else if(op == '/'){
        result= num1/num2;
        //printf("%d",result);
    }

    else {
        result = 0;
    }
    printf("%d",result); //better way
    return result;
}




int main(){
int n;
int m;
char op;
printf("Enter Number one :");
scanf("%d",&n);
printf("Enter Op : ");
scanf(" %c", &op);
printf("Enter Number Two :");
scanf("%d",&m);
cal(n,m,op);
}
