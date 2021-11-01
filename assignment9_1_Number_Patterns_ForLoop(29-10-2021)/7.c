//7)write a c program for given number pattern  11011  11011 11011 00000?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1,z=1;x<=5;x++)
    {
	if(x==1 || x==2 || x==4 || x==5)
	{
	    for(y=1;y<=5;y++)
	    {
		if(y==3)
		    printf("%d",z-1);
		else
		    printf("%d",z);
	    }
	}
	if(x==3)
	{
	    for(y=1;y<=5;y++)
	    {
		    printf("%d",z-1);
	    }
	}
	printf("\n");
    }
}
