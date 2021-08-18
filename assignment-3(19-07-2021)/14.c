#include<stdio.h>
int main()
{
	int x=2535,y,z,a,b,c;
	y=2535/365;
	z=2535%365;
	a=z/30;
	b=z%30;
	printf("Years %d Months %d Days %d \n",y,a,b);
}
