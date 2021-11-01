#include<stdio.h>
int main()
{
    int x=5,y=5,k=1;
    while(x)
    {
	if(x==5)
	{
	    while(y)
	    {
    		printf("%d",k);
		y--;
	    }
	    printf("\n");
	    x--;
	}
	y=5;
	if(x==1)
	{
	    while(y)
	    {
    		printf("%d",k);
		y--;
	    }
	    printf("\n");
	    x--;
	}
	if(x==4)
	{
	    y=5;
	    while(y)
	    {
		if(y==5)
		{
		    printf("%d",k);
		    y--;
		}
		else if(y==4)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==3)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==2)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==1)
		{
		    printf("%d",k);
		    y--;
		}
	    }
	    printf("\n");
	    x--;
	}
	y=5;
	if(x==3)
	{
	    y=5;
	    while(y)
	    {
		if(y==5)
		{
		    printf("%d",k);
		    y--;
		}
		else if(y==4)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==3)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==2)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==1)
		{
		    printf("%d",k);
		    y--;
		}
	    }
	    printf("\n");
	    x--; 
	}
	if(x==2)
	{
	    y=5;
	    while(y)
	    {
		if(y==5)
		{
		    printf("%d",k);
		    y--;
		}
		else if(y==4)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==3)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==2)
		{
		    printf("%d",k-1);
		    y--;
		}
		else if(y==1)
		{
		    printf("%d",k);
		    y--;
		}
	    }
	    printf("\n");
	    x--;
	}
    }
}

