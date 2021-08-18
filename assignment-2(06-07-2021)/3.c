#include<stdio.h>
int main()
{
	int x=5,y=10,z=15,a=1,b,c,d;
	a=++x+10+y---z++;
	b=++y+z+++a++;
	c=z+++x+++5+y++;
	d=++a+x+++y+z--;
	printf("%d %d %d %d %d %d %d\n",x,y,z,a,b,c,d);
}
