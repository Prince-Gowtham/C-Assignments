#include<stdio.h>
int main()
{
	int x=5,y=5,z;
	x=++x;y=--y;
	z=x+++y--;
	printf("%d %d %d\n",x,y,z);
}
