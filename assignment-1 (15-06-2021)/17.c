#include<stdio.h>
int main()
{
	int x=10,y=20,z=30;
	int a=x+++y;
	y=x+++y;
	z=x+++y--+z++;
	a=x+y+z;
	printf("%d %d %d %d \n",x,y,z,a);
}
