//30)write a c program for given number armstrong number or not?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b=0;
    scanf("%d",&x);
    y=x;
    while(y)
    {
	a=y%10;
	b=b+(a*a*a);
	y=y/10;
    }
    if(b==x)
    {
	printf("it is armstrong numbers \n");
    }
    else
    {
	printf("it is not armstrong numbers\n");
    }
}
