//5)write a c program for given number pattern  11111  11111 11011 11111?


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
		printf("%d",z);
	    }
	}
	if(x==3)
	{
	    for(y=1;y<=5;y++)
	    {
		if(y==3)
		    printf("%d",z-1);
		else 
		    printf("%d",z);
	    }
	}
	printf("\n");
    }
}
