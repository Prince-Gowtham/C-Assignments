//40)write a c program to binary to decimal conversion?


#include<stdio.h>
int main()
{
    int x,y,z,a,b=1,d=0;
    scanf("%d",&x);
    while(x!=0)
    {
	y=x%10;
	d=d+b*y;
	x=x/10;
	b=b*2;
    }
    printf("given binary number decimal format is %d\n",d);
}
