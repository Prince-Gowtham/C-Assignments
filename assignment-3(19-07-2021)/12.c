#include<stdio.h>
int main()
{
	int x=131900,y,z,a,b,c,d,e,f;
	y=x/1000;//y=11;
	z=x%1000;//a=800
	a=z/500;//b=1
	b=z%500;//c=300
	c=b/100;//d=3
	d=b%100;//e=0
	printf("1000 Notes %d\n",y);
	printf("500 Notes %d\n",a);
	printf("100 Notes %d\n",c);
}

