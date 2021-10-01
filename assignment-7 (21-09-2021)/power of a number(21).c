//21)write a c program for power of a numbers?


#include<stdio.h>
int main()
{
    int x,y,z=1;
    printf("enter the number\n");
    scanf("%d",&x);
    z=x;
    printf("enter the power of the number\n");
    scanf("%d",&y);
    while(x>1)
    {
	x--;
	z=z*y;
    }
    printf("%d",z);
}
