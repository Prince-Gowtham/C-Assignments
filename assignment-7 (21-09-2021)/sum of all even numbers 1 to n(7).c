//7)write a c program for a find sum of all even numbers for 1 to n?


#include<stdio.h>
int main()
{
    int x,y=1,z=0,a;
    scanf("%d",&x);
    while(y++<=x)
    {
	z=z+y;
	y++;
	if(y>=x)
	    break;
    }
	printf("%d",z);
}
