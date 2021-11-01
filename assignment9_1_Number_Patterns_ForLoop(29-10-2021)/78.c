//78)write a c program fot given mirrored right triangle star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    for(x=5;x;x--)
    {
	for(z=a;z;z--)
	{
	    printf(" ");
	}
	if(x==5)
	{
	    for(y=1;y<=9;y++)
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
	a++;
    }
}
