//2)write a c program for given natural number print in reverse..?


#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    for(y=1;x>=y;x--)
    {
	printf("%d\n",x);
    }
}
