#include<stdio.h>
int main()
{
	char a='X',b='M',c='L',d;
	d=a;
	b=b;
	a=c;
	c=d;
	printf("%c %c %c \n",a,b,c);
}
