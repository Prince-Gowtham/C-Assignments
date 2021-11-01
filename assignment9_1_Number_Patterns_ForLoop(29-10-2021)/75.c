//75)write a c program fot given pyramid star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=5;
    for(x=1;x<=9;x=x+2)
    {
	for(z=a;z;z--)
	{
	    printf(" ");
	}
	for(y=1;y<=x;y++)
	{
	    printf("*");
	}
	printf("\n");
	a--;
    }
}
