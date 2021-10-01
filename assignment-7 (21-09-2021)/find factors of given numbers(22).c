//22)write a c program for find factors of given numbers?


#include<stdio.h>
int main()
{
    int x,y=1,z,a;
    scanf("%d",&x);
    printf("Factors of given numbers\n");
    while(y<=x)
    {
	z=x/y;
	if(z>=10)
	{
	    printf("%d\n",z);
	}
	y++;
    }
}
