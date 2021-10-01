//39)write a c program for given binary value to octal value?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b=0,c=1,d,e,f,g=0;
    scanf("%d",&x);
    a=x;
    while(x)
    {
	y=x/10;
	z=x%10;
	b=b+z*c;
	c=c*2;
	x=y;
    }
    d=b;
    c=1;
    while(b)
    {
	e=b/8;
	f=b%8;
	g=g+f*c;
	c=c*10;
	b=e;
    }
    printf("the octal form is %d\n",g);
}
