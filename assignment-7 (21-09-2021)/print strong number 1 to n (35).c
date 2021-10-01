//35)write a c program to find strong number to 1 to n?


#include<stdio.h>
int main()
{
    int x,y,z=1,a=1,b,c,d=0,e,f,g,h;
    scanf("%d",&x);
    while(a<x)
    {
	y=b=g=a;
	z=1;
	while(b)
	{
	    b=b/10;
	    z=z*10;
	}
	z=z/10;
	while(y)
	{
	    e=y/z;
	    f=y%z;
	    y=f;
	    z=z/10;
	    c=1;
	    while(e)
	    {
		c=c*e;
		e--;
	    }
	    d=d+c;
	}
	    if(d==a)
	    {
		printf("%d\n",a);
	    }
	    d=0;
	    a++;
    }
}
