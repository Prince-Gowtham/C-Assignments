//50)write a c program for given numbers...?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b=1;
    for(x=1;x<=5;x++)
    {
	for(y=1;y<=x;y++)
	{
	    printf("%d ",a);
	    a=a+b;
	    b++;
	}
	printf("\n");
    }
}
