//83)write a c program for given hollow diamond star pattern..?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    for(x=5;x;x--)
    {
	for(z=1;z<a;z++)
	{
	    printf(" ");
	}
	for(y=x;y;y--)
	{
	    printf("*");
	}
	printf("\n");
	a++;
    }
    if(x==0)
    {
	for(a=4,x=1;x<=5;x++)
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
}
