//57)write a c program for given number pattern,....?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    for(x=1;x<=a;x++)
    {
	for(y=1;y<=a;y++)
	{
	    printf("%d",y);
	}
	for(z=a;z; )
	{
	    printf("%d",--z);
	}
	printf("\n");
	a=a+2;
	if(a==11)
	    break;
    }
}
