//52)write a c program for given number pattern..?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    for(x=1;x<=5;x++)
    {
	for(z=x,y=1;y<=x;y++)
	{
		if(z==4)
		    z=2;
		if(z==5)
		    z=1;
		printf("%d",z);
	}
	a++;
	printf("\n");
    }
}
