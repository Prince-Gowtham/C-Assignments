//4)write a c program for even numbers..?


#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
	if(y%2==0)
	{
	    printf("%d\n",y);
	}
    }
}
