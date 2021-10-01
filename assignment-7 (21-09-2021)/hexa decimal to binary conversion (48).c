//48)write a c program for hexa decimal to binary conversion?


#include<stdio.h>
int main()
{
    int x,y,z,a,b=0,d=1;
    scanf("%x",&x);
    y=x;
    while(y)
    {
	z=y/2;
	a=y%2;
	b=b+a*d;
	d=d*10;
	y=z;
    }
    printf("given numbers binary value is %d\n",b);
}
