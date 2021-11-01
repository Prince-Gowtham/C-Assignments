//35)write a c program for given triangle pattern..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	for(y=1,z=1;y<=x;y++)
	{
	    printf("%d",z);
	    if(z==0)
		z=1;
	    else
		z=0;
	}
	printf("\n");
    }
}
