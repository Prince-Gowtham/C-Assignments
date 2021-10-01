//13)write a c program for swap first and last digits ?


#include<stdio.h>
int main()
{
    int x,y,z=1,a=1,b,c,d,m,k=0,l=0,j;
    scanf("%d",&x);
    y=x;
    while(y)
    {
	l=y/10;
	m=x%10;
	z=z*10;
	y=l;
    }
    z=z/10;
    printf("%d\n",z);
    a=x/z;
    k=k+m*z;
    j=k;
    while(x)
    {
	c=x%z;
	z=z/10;
	if(c>0)
	{
	    d=c/z;
	}
	j=j+d*z;
	x=c;
	l++;
    }
    j=j-l;
    j=j+a;
	printf("the sum of first and last digits is %d\n",j);
}
