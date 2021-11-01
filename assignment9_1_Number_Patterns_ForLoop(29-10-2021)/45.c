//45)write a c program for given number..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1,z=1;x<=5;x++)
    {
	for(y=1;y<=x;y++)
	{
	    printf("%d",z++);
	}
    printf("\n");
    }
}
