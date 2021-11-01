//8)write a c program for given number pattern  10101  01010 00100 01010?


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
		if(x==1 || x==5)
		    for(y=1;y<=5;y++)
		    {
			if(y==1 || y==5)
			    printf("%d",z);
			else
			    printf("%d",z-1);
		    }
		else if(x==2 || x==4)
		    for(y=1;y<=5;y++)
		    {
			if(y==2 ||y==4)
			    printf("%d",z);
			else
			    printf("%d",z-1);
		    }
	    }
	}
	if(x==3)
	{
	    for(y=1;y<=5;y++)
	    {
		if(y==3)
		    printf("%d",z);
		else
		    printf("%d",z-1);
	    }
	}
	printf("\n");
    }
}

