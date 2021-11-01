//27)write a triangle number pattern for given numbers.....?


#include<stdio.h>
int main()
{
    int x=5,y=1,z=5;
    while(x)
    {
	z=x;
	while(z>=1)
	{
	    printf("%d",z);
	    z--;
	}
	printf("\n");
	x--;
    }
}

