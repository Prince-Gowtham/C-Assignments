//8)write a c program for sum of odd number 1 to n?


#include<stdio.h>
int main()
{
    int x,y=0,z=0;
    scanf("%d",&x);
    while(y++<=x)
    {
	z=z+y;
	y++;
	if (y>=x)
	    break;
    }
    printf("%d",z);
}
