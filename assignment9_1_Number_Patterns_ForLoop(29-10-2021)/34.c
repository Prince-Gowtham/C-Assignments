//34)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    z=a;
    for(x=5;x;x--)
    {
	for(z=a,y=1;y<=x;y++)
	{
	    if(z%2==1)
	    {
		printf("%d",z);
		z=z+2;
	    }
	}
	a=a+2;
	printf("\n");
    }
}
