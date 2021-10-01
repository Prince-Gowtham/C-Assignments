//1)write a c program to print all natural numbers?

#include<stdio.h>
int main()
{
    int x,y=1;
    scanf("%d",&x);
    while(y)
    {
	printf("%d\n",y);
	y++;
	if(y>x)
	    break;
    }
}


