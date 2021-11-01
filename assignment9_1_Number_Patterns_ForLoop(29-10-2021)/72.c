//72)write a c program fot given hollow inverterd right triangle star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=4;
    for(x=5;x;x--)
    {
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
