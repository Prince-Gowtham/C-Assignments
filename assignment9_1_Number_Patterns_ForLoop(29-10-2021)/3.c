//3)write a c program for given number pattern  01010 0101 01010 01010?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	z=0;
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
