//30)write a c program for given number is armstrong number or not...?


#include<stdio.h>
int main()
{
    int x,y,z,a,b=0;
    for(scanf("%d",&x),y=x;y;)
    {
	z=y%10;
	b=b+(z*z*z);
	y=y/10;
    }
    if(b==x)
	printf("it is armstong number\n");
    else
	printf("it is not armstrong number\n");
}
