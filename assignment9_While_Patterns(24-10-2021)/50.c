//50)write a c program for a given number pattern....?


#include<stdio.h>
int main()
{
    int x=1,y,z=1,a=1;
    while(x<=5)
    {
	y=1;
	while(y<=x)
	{
	    printf("%d ",z);
	    z=z+a;
	    y++;
	    a++;
	}
	printf("\n");
	x++;
    }
}
