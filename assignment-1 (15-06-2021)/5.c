#include<stdio.h>
int main()
{
	int num1=5;
	int num2=3;
	int num3=2;
	num1=num2++;
	num2=--num3;
	printf("%d %d %d\n",num1,num2,num3);
}
