//33)write a c program for print perfect number 1 to n...?


#include<stdio.h>
int main()
{
    int x,y,sum,z;
    for(scanf("%d",&x),y=1;y<=x;y++)
    {
	for(z=1,sum=0;z<=(y/2);z++)
	{
	    if(y%z==0)
	    {
		sum=sum+z;
	    }
	}
	if(sum==y)
	{
	    printf("%d\n",y);
	}
    }
}
