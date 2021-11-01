//51)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a,b=5;
    z=0;
    for(x=1;x<=b;x++)
    {
	y=(x&1)?(z+1):(z+x);
	for(a=1;a<=x;a++)
	{
	    printf("%d ",y);
	    if(x&1)
		y++;
	    else
		y--;
	    z++;
	}
	printf("\n");
    }
}
