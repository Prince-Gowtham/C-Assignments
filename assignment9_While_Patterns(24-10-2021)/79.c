//79)write a c program for hollow inverted pyramid star pattern...?


#include<stdio.h>
int main()
{
    int x=1,y,z,a;
    while(x<=5)
    {
	y=x;
	while(y)
	{
	    printf("*");
	    y--;
	}
	printf("\n");
	x++;
    }
    if(x==6)
    {
	x=4;
	while(x)
	{
	    y=x;
	    while(y)
	    {
		printf("*");
		y--;
	    }
	    printf("\n");
	    x--;
	}
    }
}



