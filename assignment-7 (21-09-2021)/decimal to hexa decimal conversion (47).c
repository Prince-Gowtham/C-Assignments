//47)write a c program for decimal to hexa decimal conversion?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c=1,d=0;
    scanf("%d",&x);
    y=x;
    while(x)
    {
	z=x%16;
	a=x/16;
	d=d+z*c;
	c=c*10;
	x=a;
    }
	printf("%x",d);
}
