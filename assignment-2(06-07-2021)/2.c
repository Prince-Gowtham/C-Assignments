#include<stdio.h>
int main()
{
	int x=5,y=10,z=15,a=1,b,c,d;
	//a=5+++10---15++;
	a=x+++y---z++;
	b=++a+x+++y--+z--;
	c=x+++y+15+z;
	d=x-y*z+a;
	printf("%d %d %d %d %d %d %d\n",x,y,z,a,b,c,d);
}
