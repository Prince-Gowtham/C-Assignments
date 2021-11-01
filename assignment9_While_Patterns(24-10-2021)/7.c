//7)write a c program for number pattern 11011 11011 00000 11011.....?


#include<stdio.h>
int main()
{
    int x=5,y=5,z=1,a=0;
    while(x)
    {
	if(x==3)
	{
	    y=5;
	    while(y)
	    {
		printf("%d",a);
		y--;
	    }
	    printf("\n");
	    x--;
	    continue;
	}
	y=5;
	while(y)
	{
	    if(y==3)
	    {
		printf("%d",a);
		y--;
		continue;
	    }
	    printf("%d",z);
	    y--;
	}
	printf("\n");
	x--;
    }
}
