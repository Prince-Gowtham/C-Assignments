//29)write a c program for find all prime factors of a numbers?


#include<stdio.h>
int main()
{
    int x,y=1,z,a,b,c;
    scanf("%d",&x);
    while(y<=x)
    {
	c=0;
	if(x%y==0)
	{
	    z=1;
	    while(z<=y)
	    {
		if(y%z==0)
		{
		    c++;
		}
		z++;
	    }
	    if(c==2)
	    {
		printf("prime factor is %d\n",y);
	    }
	}
	y++;
    }
}
