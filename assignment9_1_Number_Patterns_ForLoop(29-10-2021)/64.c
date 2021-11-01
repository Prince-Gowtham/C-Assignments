//64)write a c program for given star number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=4;
    for(x=1;x<=5;x++)
    {
	for(z=a;z;z--)
	{
	    printf(" ");
	}
	if(x==1 || x==5)
	{
	    for(y=1;y<=5;y++)
		printf("*");
	    printf("\n");
	}
	else if(x==2||x==3||x==4)
	{
	    for(y=1;y<=5;y++)
	    {
		if(y==1 || y==3)
		    printf("*");
		else
		    printf(" ");
	    }
	    printf("\n");
	}
	a--;
    }
}

