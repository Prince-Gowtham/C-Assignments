//41)write a c program to binary to hexa decimal conversions?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b=0,c,d=0;
    scanf("%d",&x);
    y=x;
    while(y)
    {
	z=y/10;
	c=y%10;
	b=b+c*a;
	a=a*2;
	y=z;
    }
    a=1;
    printf("%X",b);

}
