//63)write a c program for given star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z=4,a;
    for(x=1;x<=5;x++)
    {
	for(a=z ;a;a--)
	{
	    printf(" ");
	}
	for(y=1;y<=5;y++)
	{
	    printf("*");
	}
	printf("\n");
	z--;
    }
}
