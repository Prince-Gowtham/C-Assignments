//28)write a c program for given triangle number pattern..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	for(y=1,z=5 ; y<=x ; y++)
	{
	    printf("%d",z--);
	}
	printf("\n");
    }
}
