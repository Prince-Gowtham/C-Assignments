//17)write a c program for given number is palindrom or not?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b=0,c,d;
    scanf("%d",&x);
    y=a=x;
    while(y)
    {
	y=y/10;
	z=z*10;
    }
    z=z/10;
    while(a)
    {
	c=a/10;
	d=a%10;
	b=b+d*z;
	z=z/10;
	a=c;
    }
    if(b==x)
    {
	printf("It is palindrom number\n");
    }
    else 
    {
	printf("it is not palindrom number\n");
    }
}
