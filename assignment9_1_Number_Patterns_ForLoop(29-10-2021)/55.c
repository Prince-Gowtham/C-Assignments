//55)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	for(y=1;y<=x;y++)
	{
	    printf("%d",y);
	}
	printf("\n");
    }
    if(x==6)
    {
    for(x=4;x;x--)
    {
	for(y=1;y<=x;y++)
	{
	    printf("%d",y);
	}
	printf("\n");
    }
}
}
