//46)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a;
    for(x=1;x<=5;x++)
    {
	for(y=1,a=x;y<=x;y++)
	{
	    if(x==2 || x==4)
	    {
		for( ;a;a--)
		{
		    printf("%d",a);
		}
	    }
	    else
		printf("%d",y);
	}
	printf("\n");
    }
}
