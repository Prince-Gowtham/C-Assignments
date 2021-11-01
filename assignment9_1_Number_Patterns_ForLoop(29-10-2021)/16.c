//16)write a c program for given number pattern...12345 23451 34521...?


#include<stdio.h>
int main()
{
    int x,y,z,a;
    for(x=1;x<=5;x++)
    {
	for(y=1,z=a=x;y<=5;y++)
	{
	    if(z==6)
		while(--a)
		{
		    printf("%d",a);
		    z++;
		}
	    else if(z<=5)
		printf("%d",z++);
	}
	printf("\n");
    }
}
