//68)write a c program for right triangle 


#include<stdio.h>
int main()
{
    int x=1,y,z;
    while(x<=5)
    {
	y=1;
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
	x++;
    }
}
