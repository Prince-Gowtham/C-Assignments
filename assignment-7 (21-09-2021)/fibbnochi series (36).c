//36)write a c program for fibbonachi series?


#include<stdio.h>
int main()
{
    int x,y,z=0,a=1,b,c=1;
    scanf("%d",&x);
    while(c)
    {
	b=z+a;
	z=a;
	a=b;
	c++;
	if(c==x)
	    break;
    }
    printf("%d",b);
}
	
