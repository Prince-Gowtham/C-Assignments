//8)write a c program for sum of odd number...?


#include<stdio.h>
int main()
{
    int x,y,z=0;
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
	if(y%2==1)
	    z=z+y;
    }
    printf("%d\n",z);
}
