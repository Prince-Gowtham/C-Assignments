//73)write a c program fot given star pattern inverted hollow right triangle pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    for(x=5;x;x--)
    {
	for(z=a;z;z--)
	{
	    printf(" ");
	}
	for(y=1;y<=x;y++)
	{
	    printf(" *");
	}
	printf("\n");
	a++;
    }
}
