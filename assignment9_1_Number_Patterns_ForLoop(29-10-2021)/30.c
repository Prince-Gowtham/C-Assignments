//30)write a c program for given triangle number pattern..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=5;x;x--)
    {
	for(y=x,z=x; y<=5 ; y++)
	{
	    printf("%d",z++);
	}
	printf("\n");
    }
}
