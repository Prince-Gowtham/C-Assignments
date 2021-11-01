//34444ite a c program for given number is strong number or not..?


#include<stdio.h>
int main()
{
    int x,y,a,b=0,c=1;
    for(scanf("%d",&x),y=x; y ; )
    {
	a=y%10;
	for(c=1;a;a--)
	{
	    c=c*a;
	}
	b=b+c;
	y=y/10;
    }
    if(b==x)
	printf("it is strong number \n");
    else 
	printf("it is not strong number\n");
}

