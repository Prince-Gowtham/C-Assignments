//24)write a c program for gcd of two numbers?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b=1;
    printf("enter the two numbers\n");
    scanf("%d %d",&x,&y);
    z=(x<y)?x:y;
    while(a<=z)
    {
	if(x%a==0 && y%a==0)
	{
	    b=a;
	}
	a++;
    }
    printf("%d and %d numbers GCD is %d\n",x,y,b);
}
