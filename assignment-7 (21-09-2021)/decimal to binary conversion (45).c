//45)write a c program to decimal to binary conversion?



#include<stdio.h>
int main()
{
    long long int x,y,z=1,a,b,c=0,d=1;
    scanf("%lld",&x);
    a=x;
    while(a)
    {
	y=a/2;
	b=a%2;
	c=c+b*d;
	d=d*10;
	a=y;
    }
    printf("%lld",c);
}

