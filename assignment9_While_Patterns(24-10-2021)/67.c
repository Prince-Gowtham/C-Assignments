//67)write a c program for given hollow mirrored rhombus star pattern triangle....?


#include<stdio.h>
int main()
{
    int x=1,y;
    char c=42;
    while(x<=5)
    {
	y=x;
	while(y)
	{
	    printf("%c",c);
	    y--;
	}
	printf("\n");
	x++;
    }
}
