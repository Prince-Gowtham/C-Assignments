#include<stdio.h>
int main()
{
	int x=5,y=10,z=15,a=1;
	x=y+++a+++z;
	y=++x+y--+5;
	z=--a+++z-15;
	a=x+++y+z;
	printf("%d %d %d %d",x,y,z,a);
}
