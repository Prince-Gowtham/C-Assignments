// 2)write a c program for print all natural numbers in reverse?


#include<stdio.h>
int main()
{
    int x,y=1;
    scanf("%d",&x);
    while(y)
    {
	printf("%d\n",x);
	x--;
	if(y>x)
	    break;
    }
}


