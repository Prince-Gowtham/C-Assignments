//79)write a c program for hollow pyramid star pattern..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	for(y=1;y<=x;y++)
	{
	    printf("*");
	}
	printf("\n");
    }
    if(x==6)
    {
	for(x=4;x;x--)
	{
	    for(y=1;y<=x;y++)
	    {
		printf("*");
	    }
	    printf("\n");
	}
    }
}
