#include<stdio.h>
int main()
{
	int x=5,y=10,z=15,a=1,b,c,d;
	a=z+++14-a++;
	b=a+++y++-z++;
	c=b+++x+++z-++a;
	d=x+y+++z;
	printf("%d %d %d %d %d %d %d\n",x,y,z,a,b,c,d);
}
