//31)write a c program for print armstrong number for 1 to n..?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    for(scanf("%d",&x),y=0;y<=x;y++)
    {
	for(c=0,a=y;a; )
	{
	    b=a%10;
	    c=c+(b*b*b);
	    a=a/10;
	}
	if(c==y)
	    printf("%d\n",y);
    }
}
