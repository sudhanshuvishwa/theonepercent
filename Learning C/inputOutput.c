#include <stdio.h>
#include<stdlib.h>
// Driver code
int main()
{
	int age;
	double percent;
	char grade;
	char name[20];
	printf("input your age: ");
	scanf("%d",&age);
	printf("input your grade : ");
	scanf("%c", &grade);
	printf("input your percentage: ");
	scanf("%lf",&percent);
	printf("input your name : ");
	scanf("%s",name);
	printf("your age is %d \n",age);
	printf("your percentage is %lf",percent);
	printf("your grade is %c", grade);
	printf("your full name is %s", name);
	return 0;
}
