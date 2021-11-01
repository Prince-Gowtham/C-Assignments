//67)write a c program fot given star pattern hollow mirrored number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	for(y=1;y<=x;y++)
	{
	    printf("*");
	}
	printf("\n");
    }
}
