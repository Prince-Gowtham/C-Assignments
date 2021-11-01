//35)write a c program for print strong number 1 to n...?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,d,e,f;
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
	for(b=z=y,d=1,e=0,a=1;z;)
	{
	    z=z/10;
	    a=a*10;
	}
	a=a/10;
	for( ;b; )
	{
	    c=b/a;
	    f=b%a;
	    b=f;
	    a=a/10;
	    while(c)
	    {
		d=d*c;
		c--;
	    }
	    e=e+d;
	    if(e==y)
	    {
		printf("%d\n",y);
	    }
	}
    }
}
