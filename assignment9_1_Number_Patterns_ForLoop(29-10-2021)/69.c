//69)write a c program fot given star pattern hollow right triangle pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=4;
    for(x=1;x<=5;x++)
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
	a--;
    }
}
