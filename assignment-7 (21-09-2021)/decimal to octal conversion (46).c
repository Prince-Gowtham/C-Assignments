//46)write a c program for decimal to octal converstions?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b=0,c;
    scanf("%d",&x);
    c=x;
    while(x)
    {
	y=x%8;
	z=x/8;
	b=b+y*a;
	a=a*10;
	x=z;
    }
    printf("%d the octal form  is %d\n",c,b);
}




