//20)write a c program for given triangle number pattern..?


#include<stdio.h>
int main()
{
    int x,y;
    for(x=1;x<=5;x++)
    {
	for(y=x ; y ; y--)
	{
	    printf("%d",y);
	}
	printf("\n");
    }
}
