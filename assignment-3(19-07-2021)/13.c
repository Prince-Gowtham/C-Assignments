#include<stdio.h>
int main()
{
	int x=25300,y,z,a,b,c,d,e,f;
	y=x/3600;
	z=x%3600;
	a=z/60;
	b=z%60;
	printf("HH:MM:SS %d %d %d \n",y,a,b);
}
