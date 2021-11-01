//47)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z=1,a;
    for(x=1;x<=16;x=x*2)
    {
	for(y=1,a=x;y<=x;y++)
	{
	    if(z==10)
		z=1;
	    printf("%d",z++);
	}
	printf("\n");
    }
}
