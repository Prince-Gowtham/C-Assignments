//5)write a c program for print odd numbers...?


#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
	if(y%2==1)
	    printf("%d\n",y);
    }
}
