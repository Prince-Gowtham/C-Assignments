#include<stdio.h>
int main()
{
	int x=10,y=20,z=30,a;
	a=x+++y;
	y=x+++y;
	z=x+++y+--z+10;
	a=x+++y;
	printf("%d %d %d %d\n",x,y,z,a);

}
