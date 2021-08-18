#include<stdio.h>
int main()
{
	int x=5,y=10,z=15,a=1,b,c,d;
	a=a+++y+++--x+z++;
	b=x+++y--+z---5;
	c=b+++5+x+++z--;
	d=x--+y++-z++-2;
	printf("%d %d %d %d %d %d %d\n",x,y,z,a,b,c,d);
}
