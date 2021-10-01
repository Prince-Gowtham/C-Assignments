//49)write a c program for convert hexa decimal to octal number system?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c=1,d=0;
    scanf("%x",&x);
    y=x;
    while(y)
    {
	z=y/8;
	a=y%8;
	d=d+a*c;
	c=c*10;
	y=z;
    }
    printf("%x this numbers octal form is %d\n",x,d);
}
