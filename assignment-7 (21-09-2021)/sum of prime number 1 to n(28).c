//28)write a c program for sum of all prime numbers in 1 to n?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b,c=0;
    scanf("%d",&b);
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
	    c=c+y;
	}
	y++;
    }
	    printf("sum of all prime number %d \n",c);
}
