//39)write a c program for given triangle number pattern..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=9;x=x+2)
    {
	for(y=1,z=1; y<=x ; y++)
	{
	    printf("%d",z++);
	}
	printf("\n");
    }
}
