//62)write a c program for given hollow star pattern .....?


#include<stdio.h>
int main()
{
    int x,y,z=4;
    for(x=1;x<=5;x++)
    {
	for(y=x;y<=5;y++)
	{
	    if(x==3)
		for(x=3;x<=5;x++)
		{
		    for(y=x;y;y--)
		    {
			printf("*");
		    }
		    printf("\n");
		}
	    else if(x<3)
		printf("*");
	}
	    printf("\n");
    }
}
