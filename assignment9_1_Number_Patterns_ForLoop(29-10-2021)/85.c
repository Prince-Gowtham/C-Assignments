//85)write a c program for given plus star pattern..?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=10;x++)
    {
	for(y=1;y<=10;y++)
	{
	    if(x==5)
	    {
		for(y=1;y<=10;y++)
		    printf("*");
	    }
	    if(y==5)
		printf("*");
	    else 
		printf(" ");
	}
	printf("\n");
    }
}
