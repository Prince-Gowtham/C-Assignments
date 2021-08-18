#include<stdio.h>
int main()
{
	int x=10,y=5;
	y=++x+y+++10;
	printf("%d %d\n",x,y);
}
