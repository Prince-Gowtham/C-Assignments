//60)write a c program for given star pattern programming excersice...?


#include<stdio.h>
int main()
{
    int x=1,y;
    char z;
    while(x<=5)
    {
	y=1;
	z=42;
	while(y<=5)
	{
	    printf("%c",z);
	    y++;
	}
	printf("\n");
	x++;
    }
}
