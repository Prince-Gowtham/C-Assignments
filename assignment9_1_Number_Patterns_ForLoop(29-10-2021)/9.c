//8)write a c program for given number pattern  10101  01010 00100 01010?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1,z=1;x<=5;x++)
    {
	if(x<=5)
	{
	    for(y=1;y<=5;y++)
	    {
		if(x==1 || x==5)
		    for(y=1;y<=5;y++)
		    {
			if(y==1 || y==5)
			    printf("%d",z-1);
			else
			    printf("%d",z);
		    }
		else if(x==2 || x==3 || x==4)
		{
		    for(y=1;y<=5;y++)
		    {
			if(y==1 || y==5)
			    printf("%d",z);
			else
			    printf("%d",z-1);
		    }
		}
	    }
	}
	printf("\n");
    }
}
