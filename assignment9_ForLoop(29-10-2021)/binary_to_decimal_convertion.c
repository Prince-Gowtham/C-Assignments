//40)write a c program for given binary value to decimal value..?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,d,g;
    for(scanf("%d",&x),y=x,z=1,c=1,b=0; y ; )
    {
	d=y/10;
	a=y%10;
	b=b+a*c;
	c=c*2;
	y=d;
    }
    printf("%d decimalvalues\n",b); 
}
