#include<stdio.h>
int main()
{
	int x=2,y;
	y=++x*x++*++x;
	printf("%d %d\n",x,y);
}
