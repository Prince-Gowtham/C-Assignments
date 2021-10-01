//53)write a c program print diagnol 1 to n?


#include<stdio.h>
int main()
{
    int x,y=1,z;
    scanf("%d",&x);
    while(y<=x)
    {
       	printf(" ");
	z=1;
	while(z<=y)
	{
	    printf("%d ",z);
	    z++;
	}
	printf("\n");
        y++;
    }
}
