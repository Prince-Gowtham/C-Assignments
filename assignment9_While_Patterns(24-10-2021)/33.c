//33)write a c program for a triangle number pattern....?


#include<stdio.h>
int main()
{
    int x=5,y=1,z=1;
    while(x)
    {
	z=x;
	y=1;
	while(y<=x)
	{
	    printf("%d",z);
	    z++;
	    y++;
	}
	printf("\n");
	x--;
    }
}
