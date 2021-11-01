//6)write a c natural numbers sum 1 to n...?


#include<stdio.h>
int main()
{
    int x,y,z=0;
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
	z=z+y;
    }
    printf("%d\n",z);
}
