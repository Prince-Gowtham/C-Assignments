//20)write a c program for triangle number patterns....?


#include<stdio.h>
int main()
{
    int x=1,y=1,z=1;
    while(x<=5)
    {
	y=1;
	while(x>=y)
	{
	    printf("%d",z);
	    y++;

	}
	printf("\n");
	x++;
	z++;
    }
}
