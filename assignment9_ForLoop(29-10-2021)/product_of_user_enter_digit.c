//15)write a c program for given digits numbers...?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b;
    scanf("%d",&x);
    for(y=x;y; )
    {
	y=y/10;
	z=z*10;
    }
    z=z/10;
    for(a=1 ;z; )
    {
	y=x/z;
	b=x%z;
	z=z/10;
	a=a*y;
	x=b;
    }
    printf("%d\n",a);
}

