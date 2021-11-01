//48)write a c program given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a,b=4;
    for(x=1;x<=5;x++)
    {
	for(z=x,y=1;y<=x;y++)
	{
	    printf("%d",y);
	}
	for(a=b;a;a--)
	{
	    printf(" ");
	}
	for( ; z ; z--)
	{
	    printf("%d",z);
	}
	printf("\n");
	b--;
    }
}
