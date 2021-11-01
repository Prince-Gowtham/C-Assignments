//37)write a c program for 1's complement for binary numbers...?


#include<stdio.h>
int main()
{
    int x,y,z,a,b;
    for(scanf("%d",&x),y=x;y;)
    {
	for(z=1;y;)
	{
	    y=y/10;
	    z=z*10;
	}
	z=z/10;
	for(;x;)
	{
	    a=x/z;
	    b=x%z;
	    z=z/10;
	    x=b;
	    if(a==1)
		printf("%d",a-1);
	    else
		printf("%d",a+1);
	}
    }
}
