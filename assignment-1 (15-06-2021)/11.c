#include<stdio.h>
int main()
{
	int a=5;
	int c=++a*++a;
	printf("%d\n",a);
	printf("%d\n",c);
	c=++a*++a;
	printf("%d\n",c);
	printf("%d\n",a);
}
