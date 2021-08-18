#include<stdio.h>
int main()
{
	int x=5,y=10,z=7,a=1,b,c,d;
	a=a+++y+++z--;
	b=++x+y+++z-a;
	c=x+++y+++10-z;
	d=++y+z+a++;
	printf("%d %d %d %d %d %d %d\n",x,y,z,a,b,c,d);
}
