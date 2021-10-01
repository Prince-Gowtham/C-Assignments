//42)write a c program for given octal value to binary?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c=0,d=1,e,f,g=0;
    scanf("%d",&x);
    a=x;
    while(a)
    {
	z=a/10;
	b=a%10;
	c=c+b*d;
	d=d*8;
	a=z;
    }
    d=1;
    while(c)
    {
	e=c/2;
	f=c%2;
	g=g+f*d;
	d=d*10;
	c=e;
    }
    printf("%d given octal value to decimal value %d\n",x,g);
}
