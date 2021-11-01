//49)write a c program for a triangle number pattern.....?


#include<stdio.h>
int main()
{
    int x=1,y,z=4,a,b;
    while(x<=5)
    {
	y=a=x;
	b=1;
	z=4;
	while(b<=y)
	{
	    printf("%d ",a);
	    b++;
	    a=a+z;
	    z--;
	}
	printf("\n");
	x++;
    }
}
