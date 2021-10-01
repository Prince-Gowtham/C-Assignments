//14) write a c program for sum of the digit of a numbers?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b,c,d=0;
    scanf("%d",&x);
    y=x;
    while(y)
    {
	a=y/10;
	z=z*10;
	y=a;
    }
    z=z/10;
    while(z)
    {
	b=x/z;
	c=x%z;
	x=c;
	d=d+b;
	z=z/10;
    }
    printf("sum of given digits %d \n",d);
}
