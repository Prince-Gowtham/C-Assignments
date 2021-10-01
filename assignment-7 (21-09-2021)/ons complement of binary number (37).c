//37)write a c program for 1's complement of binary number?


#include<stdio.h>
int main()
{
    int x,y=0,z=1,a,b,c,d;
    scanf("%d",&x);
    c=x;
    while(c)
    {
	b=c/10;
	z=z*10;
	c=b;
    }
    z=z/10;
    while(z)
    {
	a=x/z;
	d=x%z;
	z=z/10;
	x=d;
	if(a==0)
	{
	    printf("%d",a=a+1);
	}
	else if(a==1)
	{
	    printf("%d",a=a-1);
	}
    }
}
