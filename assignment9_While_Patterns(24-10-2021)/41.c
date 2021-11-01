//43)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x=1,y=1,z;
    while(x<=5)
    {
	z=x;
	y=1;
	while(y<=x)
	{
	    printf("%d",y++);
	}
	while(--z)
	{
	    if(z>0)
		printf("%d",z);
	}
	printf("\n");
	x++;
    }
}
