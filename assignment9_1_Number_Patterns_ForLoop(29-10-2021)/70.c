//70)write a c program fot given mirrored right triangle star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=4;
    for(x=1;x<=5;x++)
    {
	for(z=a;z;z--)
	{
	    printf(" ");
	}
	if(x==5)
	{
	    for(x=9,y=1;y<=x;y++)
	    {
		printf("*");
	    }
	    printf("\n");
	    continue;
	}
	for(y=1;y<=x;y++)
	{
	    if((x==3&&y==2)||(x==4&&y==3||x==4 && y==2))
		printf(" ");
	    else
		printf("*");
	}
	printf("\n");
	a--;
    }
}
