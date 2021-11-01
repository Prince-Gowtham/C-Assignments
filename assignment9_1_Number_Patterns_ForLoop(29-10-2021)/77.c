//77)write a c program fot given inverted pyramid star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    for(x=9;x;x=x-2)
    {
	if(x<0)
	    break;
	for(z=a;z;z--)
	{
	    printf(" ");
	}
	for(y=1;y<=x;y++)
	{
	    printf("*");
	}
	printf("\n");
	a++;
    }
}
