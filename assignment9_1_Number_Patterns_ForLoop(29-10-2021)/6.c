//6)write a c program for given number pattern  10101 01010 10101 01010 10101?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1,z=1;x<=5;x++)
    {
	for(y=1;y<=5;y++)
	{
	    printf("%d",z);
	    if(z==1)
		z=0;
	    else
	       	z=1;
	}
	printf("\n");
    }
}
