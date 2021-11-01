//68)write a c program for right triangle 


#include<stdio.h>
int main()
{
    int x=5,y,z,a=1;
    while(x)
    {
	y=1;
	z=1;
	while(z<=a)
	{
	    printf(" ");
	    z++;
	}
	while(y<=x)
	{
	    if(x==3 && y==2 || x==4 && y==2)
	    {
		printf(" ");
		y++;
		continue;
	    }
	    else if(x==4 && y==3)
	    {
		printf(" ");
		y++;
		continue;
	    }
	    printf("*");
	    y++;
	}
	printf("\n");
	x--;
	a++;
    }
}
