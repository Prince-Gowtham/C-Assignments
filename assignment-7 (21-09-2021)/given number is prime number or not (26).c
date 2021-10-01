//26)write a c program for given number is prime number or not?


#include<stdio.h>
int main()
{
    int x,y,z=2,a=0;
    scanf("%d",&x);
    while(z<x)
    {
	if(x%z==0)
	{
	    a++;
	}
	z++;
    }
    if(a==0)
    {
	printf("%d its prime number \n",x);
    }
    else
    {
	printf("%d its not a prime number \n",x);
    }
}
