#include<stdio.h>
int main()
{
	int x=5,y=10,z=15,a=1,b,c,d;
	a=x+++y+++--z+5;
	b=--x+y+++x+z++;
	c=++z+y+++5+x++;
	d=x+y+z-a;
	printf("%d %d %d %d %d %d %d\n",x,y,z,a,b,c,d);
}
