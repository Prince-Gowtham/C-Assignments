//5)write a c program for print number pattern program 11111 11111 11011 11111 11111....?


#include<stdio.h>
int main()
{
    int x=5,j=5,k=1,a=0;
    while(x)
    {
	j=5;
	if(x==3)
	{
	    while(j)
	    {
		printf("%d",k);
		j--;
		if(j==3)
		{
		    printf("%d",a);
		    x--;
		    j--;
		}
	    }
	    printf("\n");
	}
	j=5;
	while(j)
	{
	    printf("%d",k);
	    j--;
	}
	x--;
	printf("\n");
    }
}


