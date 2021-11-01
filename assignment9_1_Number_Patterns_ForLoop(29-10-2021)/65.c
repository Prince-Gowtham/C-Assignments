//65)write a c program for given star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z=1,a;
    for(x=1;x<=5;x++)
    {
	for(a=1 ;a<z;a++)
	{
	    printf(" ");
	}
	for(y=1;y<=5;y++)
	{
	    printf("*");
	}
	printf("\n");
	z++;
    }
}
