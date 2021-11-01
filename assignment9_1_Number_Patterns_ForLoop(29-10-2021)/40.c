//40)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b;
    z=a;
    for(x=1;x<=5;x++)
    {
	for(z=a,b=2,y=1;y<=x;y++)
	{
	    if(x==1 || x==3 || x==5)
	    {
		if(z%2==1)
		{
		    printf("%d",z);
		    z=z+2;
		}
	    }
	    else if(x==2 || x==4)
	    {
		if(b%2==0)
		{
		    printf("%d",b);
		    b=b+2;
		}
	    }
	}
	printf("\n");
    }
}
