//82)write a c program for print hollow diamond star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b;
    for(x=5;x;x--)
    {
	for(y=1;y<=x;y++)
	{
	    printf("*");
	}
	for(z=1;z<a;z++)
	{
	    printf(" ");
	}
	for(y=1;y<=x;y++)
	{
	    printf("*");
	}
	a++;
	printf("\n");
    }
    if(x==0)
	for(a=4,x=1;x<=5;x++)
	{
	    for(y=1;y<=x;y++)
	    {
		printf("*");
	    }
	    for(z=a ; z ; z--)
	    {
		printf(" ");
	    }
	    for(y=1;y<=x;y++)
	    {
		printf("*");
	    }
	    a--;
	    printf("\n");
	}
}
