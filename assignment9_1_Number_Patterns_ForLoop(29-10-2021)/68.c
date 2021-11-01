//68)write a c program fot given right triangle star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
	for(y=1;y<=x;y++)
	{
	    if((x==3&&y==2)||(x==4&&y==2||x==4 && y==3))
		printf(" ");
	    else
		printf("*");
	}
	printf("\n");
    }
}
