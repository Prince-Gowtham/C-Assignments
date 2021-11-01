//29)write a c program for prime factors of a numer..?


#include<stdio.h>
int main()
{
    int x,y=1,z,a,b,c;
    for(scanf("%d",&x);y<=x;y++)
    {
	c=0;
	if(x%y==0)
	{
	    for(z=1;z<=y;z++)
	    {
		if(y%z==0)
		{
		    c++;
		}
	    }
	    if(c==2)
	    {
		printf("prime factors of the numberis %d\n",y);
	    }
	}
    }
}
