//44)write a c program for octal to hexa decimal conversion?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c=0,d=1;
    scanf("%d",&x);
    y=x;
    while(x)
    {
	z=x/10;
	a=x%10;
	c=c+a*d;
	d=d*8;
	x=z;
    }
    printf("%d given octal numbers hexa decimal conversion is %x",y,c);
}
