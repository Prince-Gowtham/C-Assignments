//31)write a c program print all armstrong numbers 1 to n?


#include<stdio.h>
int main()
{
    int x,y=0,z,a,b,c,d;
    scanf("%d",&x);
    while(y<x)
    {
	d=0;
	y++;
	a=y;
	while(a)
	{
	    b=a%10;
	    c=a/10;
	    d=d+(b*b*b);
	    a=c;
	}
	if(d==y)
	{
	    printf("%d\n",y);
	}
    }
}
