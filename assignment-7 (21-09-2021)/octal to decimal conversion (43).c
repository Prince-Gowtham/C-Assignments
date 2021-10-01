//43)write a c program for given octal number to decimal number?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c=0,d=1;
    scanf("%d",&x);
    b=x;
    while(b)
    {
	y=b/10;
	z=b%10;
	c=c+z*d;
	d=d*8;
	b=y;
    }
    printf("%d given octal decimal value is %d\n",x,c);
}
