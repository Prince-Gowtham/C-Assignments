//59)write a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int x,y,z=1,a=10,b;
    for(x=1;x<=5;x++)
    {
	for(y=1;y<=z;y++)
	{
	    printf(" ");
	}
	printf("%d",x);
	if(x==5)
	    break;
	for(b=z ;b<=10;b++)
	{
	    if(b<0)
		break;
	    printf(" ");
	}
	printf("%d",x);
	printf("\n");
	a=a-2;
	z++;
    }
}
