//23)write a c program for factorial of the numbers?


#include<stdio.h>
int main()
{
    int x,y=1,z;
    scanf("%d",&x);
    z=x;
    while(x)
    {
	y=y*x;
	x--;
    }
    printf("%d the factorial of this number %d\n ",z,y);
}


