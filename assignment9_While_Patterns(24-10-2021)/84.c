//84)write a c program for left arrow star pattern...?


#include<stdio.h>
int main()
{
    int x=5,y,z;
    while(x)
    {
	y=1;
	while(y<=x)
	{
	    printf(" ");
	    y++;
	}
	y=1;
	while(y<=x)
	{
	    printf("*");
	    y++;
	}
	printf("\n");
	x--;
    }
    if(x==0)
    {
	x=2;
	while(x<=5)
	{
	    y=1;
	    while(y<=x)
	    {
		printf(" ");
		y++;
	    }
	    y=1;
	    while(y<=x)
	    {
		printf("*");
		y++;
	    }
	    printf("\n");
	    x++;
	}
    }
}
