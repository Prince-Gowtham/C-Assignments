#include<stdio.h>
int main()
{
	int x=1329,y,z,a,b;
	y=1329/365;
	z=1329%365;
	a=z/7;
	b=z%7;
	printf("Years %d\n",y);
	printf("weaks %d\n",a);
	printf("Days %d\n",b);
}
