//15)write a c program for given digits products?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b,c,d=1;
    scanf("%d",&x);
    y=x;
    while(y)
    {
	z=z*10;
	a=y/10;
	y=a;
    }
    z=z/10;
    while(z)
    {
	b=x/z;
	c=x%z;
	z=z/10;
	d=d*b;
	x=c;
    }
    printf("the product of given digits is : %d\n",d);
}
