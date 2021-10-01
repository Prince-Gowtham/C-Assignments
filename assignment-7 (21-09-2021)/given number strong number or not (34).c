//34)write a c program for given number is strong number or not?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b,c=0,d,f=1;
    scanf("%d",&x);
    y=d=x;
    while(d)
    {
	d=d/10;
	z=z*10;
    }
    z=z/10;
    while(y)
    {
	a=y/z;
	b=y%z;
	z=z/10;
	y=b;
	while(a)
	{
	    f=f*a;
	    a--;
	}
	c=c+f;
	f=1;
    }
    if(x==c)
    {
	printf("it is strong numbers\n");
    }
    else 
    {
	printf(" it is not strong number\n");
    }
}

