//29)write a c program for given triangle number pattern..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	for(y=x,z=5 ; y<=5 ; y++)
	{
	    printf("%d",z--);
	}
	printf("\n");
    }
}
