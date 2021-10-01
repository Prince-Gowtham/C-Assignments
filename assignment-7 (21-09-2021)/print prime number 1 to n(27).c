//27)write a c program for print all prime numbers in 1 to n?


#include<stdio.h>
int main()
{
    int x,y,z,a,b;
    scanf("%d%d",&a,&b);
    y=a;
    while(y<=b)
    {
	z=0;
	x=2;
	while(x<=y/2)
	{
	    if(y%x==0)
	    {
		z++;
		break;
	    }
	    x++;
	}
	if(z==0 && y!=1)
	{
	    printf("%d\n",y);
	}
	y++;
    }
}
