//39)write a c program for a number pattern...?


#include<stdio.h>
int main()
{
    int x=1,y,z=1;
    while(x<10)
    {
	z=1;
	while(z<=x)
	{
	    printf("%d ",z);
	    z++;
	}
	printf("\n");
	x++;
	x++;
    }
}
	    
