//10)write a c program for given number pattern 11111 22222 33333 44444?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1,z=1;x<=5;x++)
    {
	for(y=1;y<=5;y++)
	{
	    printf("%d",z);
	}
	z++;
	printf("\n");
    }
}
