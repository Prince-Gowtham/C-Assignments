//75)write a c program for given hollow inverted mirrored right triangle star pattern..?


#include<stdio.h>
int main()
{
    int x=1,y,z=1,a;
    while(x<=9)
    {
	y=z;
	while(y<=5)
	{
	    printf(" ");
	    y++;
	}
	a=1;
	while(a<=x)
	{
	    printf("*");
	    a++;
	}
	printf("\n");
	x=x+2;
	z++;
    }
}
