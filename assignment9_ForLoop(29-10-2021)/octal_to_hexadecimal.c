//44)write a c program for givne octal value to binary conversion..?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,d;
    for(scanf("%d",&d),x=d,b=0,z=1; x ; )
    {
	y=x%10;
	a=x/10;
	b=b+y*z;
	z=z*8;
	x=a;
    }
    printf("the binary value of given number %x",b);
}
