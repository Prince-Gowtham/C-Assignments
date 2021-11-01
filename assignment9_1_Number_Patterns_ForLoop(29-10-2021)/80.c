//80)write a c program for hollow pyramid star pattern..?


#include<stdio.h>
int main()
{
    int x,y,z=4,a;
    for(x=1;x<=5;x++)
    {
    for(a=1;a<=z;a++)
    {
	printf(" ");
    }
    z--;
	for(y=1;y<=x;y++)
	{
	    printf(" * ");
	}
	printf("\n");
    }
    if(x==6)
    {
	z=1;
	for(x=4;x;x--)
	{
	    for(a=z;a;a--)
	    {
		printf(" ");
	    }
	    for(y=1;y<=x;y++)
	    {
		printf(" * ");
	    }
	    printf("\n");
	    z++;

	}
    }
}
