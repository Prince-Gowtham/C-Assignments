//52)write a c program for a number pattern...?


#include<stdio.h>
int main()
{
    int x=1,y,z=1;
    while(x<=5)
    {
	y=1;
	z=x;
	if(z==4)
	    z=z/2;
	if(z==5)
	    z=1;
	while(y<=x)
	{
	    printf("%d",z);
	    y++;
	}
	printf("\n");
	x++;
    }
}
