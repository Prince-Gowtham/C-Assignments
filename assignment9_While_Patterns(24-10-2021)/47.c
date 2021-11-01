//47)write a c program for a number pattern....?


#include<stdio.h>
int main()
{
    int x=1,y=1,z=1,a,b=1;
    while(x<=5)
    {
	y=x;
	y=y*x;
	b=1;
	while(b<=y)
	{
	    printf("%d",z);
	    z++;
	    b++;
	    if(z==10)
		z=1;

	}
	printf("\n");
	x++;
    }
}
