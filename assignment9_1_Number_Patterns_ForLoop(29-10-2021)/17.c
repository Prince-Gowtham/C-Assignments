//17)write a c program for given number pattern...12345 23451 34521...?


#include<stdio.h>
int main()
{
    int x,y,z,a,c;
    for(x=1;x<=5;x++)
    {
	for(y=x,a=1,c=5;a<=5;a++)
	{
	    if(y==1)
		while(y<=c)
		{
		    printf("%d",y++);
		    if(y==5)
			a=y;
		}
	    else 
	    {
		printf("%d",y--);
		c--;
	    }
	}
	printf("\n");
    }
}
