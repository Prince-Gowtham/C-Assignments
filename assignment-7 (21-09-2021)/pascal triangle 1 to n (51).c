//51)write a c program for pascal triangle 1 to n ?


#include<stdio.h>
int main()
{
    int x,y=1,z,a,b,c;
    scanf("%d",&x);
    while(y<x)
    {
	printf("  ");
	z=y;
	while(z>=y)
	{
	    printf(" ");
	    printf("%d",z);
	    z++;
	}
	printf("%d",y);
	y++;
    }
}
