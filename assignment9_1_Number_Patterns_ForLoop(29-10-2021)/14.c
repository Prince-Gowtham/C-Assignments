//14)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x=5,y=5,z,a;
    for(z=1;z<=x;z++)
    {
	for(a=y;a>y-z;a--)
	{
	    printf("%d",a);
	}
	for(a=1;a<=y-z;a++)
	{
	    printf("%d",(x-z+1));
	}
	printf("\n");
    }
}
