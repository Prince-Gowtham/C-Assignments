//35)write a c program for given triangle pattern..?


#include<stdio.h>
int main()
{
    int x,y,z=1;
    for(x=1;x<=5;x++)
    {
	for(y=1;y<=x;y++)
	{
	    if(x==3&&y==2||x==4&&y==2)
	    {
		printf("%d",z-1);
		continue;
	    }
	    else if(x==4&&y==3)
	    {
		printf("%d",z-1);
		continue;
	    }
	    printf("%d",z);
	}
	printf("\n");
    }
}
