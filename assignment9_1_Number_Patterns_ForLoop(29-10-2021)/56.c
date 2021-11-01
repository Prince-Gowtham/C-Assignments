//56)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a;
    for(x=1;x<=9;x=x+2)
    {
	for(y=1;y<=x;y++)
	{
	    printf("%d",y);
	}
	printf("\n");
    }
    a=x;
    if(a==11)
    {
    for(x=7;x>0;x=x-2)
    {
	for(y=1;y<=x;y++)
	{
	    printf("%d",y);
	}
	printf("\n");
    }
}
}
