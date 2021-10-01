//9) write a c program for multiplication table for given numbers?


#include<stdio.h>
int main()
{
    int x,y,z=1,a;
    printf("Enter the no of table want :\n");
    scanf("%d",&x);
    printf("how many numbers do you want show :\n");
    scanf("%d",&y);
    while(z<=y)
    {
	a=z*x;
	printf("%3d X %3d = %3d\n",z,x,a);
	z++;
    }
}



