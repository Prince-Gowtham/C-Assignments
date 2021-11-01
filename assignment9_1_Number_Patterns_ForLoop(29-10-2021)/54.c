//53)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a;
    for(x=5,a=1;x!=1;x--)
    {
	for(y=a;y<=5;y++)
	{
	    printf("%d",y);
	}
	printf("\n");
	a++;
    }
}
